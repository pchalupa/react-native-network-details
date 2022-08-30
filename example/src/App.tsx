import React, { useRef } from 'react';
import { StyleSheet, View, Text } from 'react-native';
import { getHostname } from 'react-native-network-info';

export default function App() {
  const hostname = useRef(getHostname());

  return (
    <View style={styles.container}>
      <Text>Hostname: {hostname.current}</Text>
    </View>
  );
}

const styles = StyleSheet.create({
  container: {
    flex: 1,
    alignItems: 'center',
    justifyContent: 'center',
  },
  box: {
    width: 60,
    height: 60,
    marginVertical: 20,
  },
});
