declare function jsiGetHostname(): number[];

export function getHostname(): string {
  const data = jsiGetHostname().filter(Boolean);
  const hostname = data
    .map((character) => String.fromCharCode(character))
    .join('');

  return hostname;
}
