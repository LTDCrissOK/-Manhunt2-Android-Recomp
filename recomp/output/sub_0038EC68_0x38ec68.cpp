#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0038EC68
// Address: 0x38ec68 - 0x38ee38
void sub_0038EC68_0x38ec68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038EC68_0x38ec68");
#endif

    switch (ctx->pc) {
        case 0x38ec68u: goto label_38ec68;
        case 0x38ec6cu: goto label_38ec6c;
        case 0x38ec70u: goto label_38ec70;
        case 0x38ec74u: goto label_38ec74;
        case 0x38ec78u: goto label_38ec78;
        case 0x38ec7cu: goto label_38ec7c;
        case 0x38ec80u: goto label_38ec80;
        case 0x38ec84u: goto label_38ec84;
        case 0x38ec88u: goto label_38ec88;
        case 0x38ec8cu: goto label_38ec8c;
        case 0x38ec90u: goto label_38ec90;
        case 0x38ec94u: goto label_38ec94;
        case 0x38ec98u: goto label_38ec98;
        case 0x38ec9cu: goto label_38ec9c;
        case 0x38eca0u: goto label_38eca0;
        case 0x38eca4u: goto label_38eca4;
        case 0x38eca8u: goto label_38eca8;
        case 0x38ecacu: goto label_38ecac;
        case 0x38ecb0u: goto label_38ecb0;
        case 0x38ecb4u: goto label_38ecb4;
        case 0x38ecb8u: goto label_38ecb8;
        case 0x38ecbcu: goto label_38ecbc;
        case 0x38ecc0u: goto label_38ecc0;
        case 0x38ecc4u: goto label_38ecc4;
        case 0x38ecc8u: goto label_38ecc8;
        case 0x38ecccu: goto label_38eccc;
        case 0x38ecd0u: goto label_38ecd0;
        case 0x38ecd4u: goto label_38ecd4;
        case 0x38ecd8u: goto label_38ecd8;
        case 0x38ecdcu: goto label_38ecdc;
        case 0x38ece0u: goto label_38ece0;
        case 0x38ece4u: goto label_38ece4;
        case 0x38ece8u: goto label_38ece8;
        case 0x38ececu: goto label_38ecec;
        case 0x38ecf0u: goto label_38ecf0;
        case 0x38ecf4u: goto label_38ecf4;
        case 0x38ecf8u: goto label_38ecf8;
        case 0x38ecfcu: goto label_38ecfc;
        case 0x38ed00u: goto label_38ed00;
        case 0x38ed04u: goto label_38ed04;
        case 0x38ed08u: goto label_38ed08;
        case 0x38ed0cu: goto label_38ed0c;
        case 0x38ed10u: goto label_38ed10;
        case 0x38ed14u: goto label_38ed14;
        case 0x38ed18u: goto label_38ed18;
        case 0x38ed1cu: goto label_38ed1c;
        case 0x38ed20u: goto label_38ed20;
        case 0x38ed24u: goto label_38ed24;
        case 0x38ed28u: goto label_38ed28;
        case 0x38ed2cu: goto label_38ed2c;
        case 0x38ed30u: goto label_38ed30;
        case 0x38ed34u: goto label_38ed34;
        case 0x38ed38u: goto label_38ed38;
        case 0x38ed3cu: goto label_38ed3c;
        case 0x38ed40u: goto label_38ed40;
        case 0x38ed44u: goto label_38ed44;
        case 0x38ed48u: goto label_38ed48;
        case 0x38ed4cu: goto label_38ed4c;
        case 0x38ed50u: goto label_38ed50;
        case 0x38ed54u: goto label_38ed54;
        case 0x38ed58u: goto label_38ed58;
        case 0x38ed5cu: goto label_38ed5c;
        case 0x38ed60u: goto label_38ed60;
        case 0x38ed64u: goto label_38ed64;
        case 0x38ed68u: goto label_38ed68;
        case 0x38ed6cu: goto label_38ed6c;
        case 0x38ed70u: goto label_38ed70;
        case 0x38ed74u: goto label_38ed74;
        case 0x38ed78u: goto label_38ed78;
        case 0x38ed7cu: goto label_38ed7c;
        case 0x38ed80u: goto label_38ed80;
        case 0x38ed84u: goto label_38ed84;
        case 0x38ed88u: goto label_38ed88;
        case 0x38ed8cu: goto label_38ed8c;
        case 0x38ed90u: goto label_38ed90;
        case 0x38ed94u: goto label_38ed94;
        case 0x38ed98u: goto label_38ed98;
        case 0x38ed9cu: goto label_38ed9c;
        case 0x38eda0u: goto label_38eda0;
        case 0x38eda4u: goto label_38eda4;
        case 0x38eda8u: goto label_38eda8;
        case 0x38edacu: goto label_38edac;
        case 0x38edb0u: goto label_38edb0;
        case 0x38edb4u: goto label_38edb4;
        case 0x38edb8u: goto label_38edb8;
        case 0x38edbcu: goto label_38edbc;
        case 0x38edc0u: goto label_38edc0;
        case 0x38edc4u: goto label_38edc4;
        case 0x38edc8u: goto label_38edc8;
        case 0x38edccu: goto label_38edcc;
        case 0x38edd0u: goto label_38edd0;
        case 0x38edd4u: goto label_38edd4;
        case 0x38edd8u: goto label_38edd8;
        case 0x38eddcu: goto label_38eddc;
        case 0x38ede0u: goto label_38ede0;
        case 0x38ede4u: goto label_38ede4;
        case 0x38ede8u: goto label_38ede8;
        case 0x38edecu: goto label_38edec;
        case 0x38edf0u: goto label_38edf0;
        case 0x38edf4u: goto label_38edf4;
        case 0x38edf8u: goto label_38edf8;
        case 0x38edfcu: goto label_38edfc;
        case 0x38ee00u: goto label_38ee00;
        case 0x38ee04u: goto label_38ee04;
        case 0x38ee08u: goto label_38ee08;
        case 0x38ee0cu: goto label_38ee0c;
        case 0x38ee10u: goto label_38ee10;
        case 0x38ee14u: goto label_38ee14;
        case 0x38ee18u: goto label_38ee18;
        case 0x38ee1cu: goto label_38ee1c;
        case 0x38ee20u: goto label_38ee20;
        case 0x38ee24u: goto label_38ee24;
        case 0x38ee28u: goto label_38ee28;
        case 0x38ee2cu: goto label_38ee2c;
        case 0x38ee30u: goto label_38ee30;
        case 0x38ee34u: goto label_38ee34;
        default: break;
    }

    ctx->pc = 0x38ec68u;

label_38ec68:
    // 0x38ec68: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x38ec68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_38ec6c:
    // 0x38ec6c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x38ec6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_38ec70:
    // 0x38ec70: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x38ec70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_38ec74:
    // 0x38ec74: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x38ec74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
label_38ec78:
    // 0x38ec78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38ec78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_38ec7c:
    // 0x38ec7c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x38ec7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_38ec80:
    // 0x38ec80: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x38ec80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
label_38ec84:
    // 0x38ec84: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x38ec84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
label_38ec88:
    // 0x38ec88: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x38ec88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
label_38ec8c:
    // 0x38ec8c: 0x24479778  addiu       $a3, $v0, -0x6888
    ctx->pc = 0x38ec8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940536));
label_38ec90:
    // 0x38ec90: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x38ec90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_38ec94:
    // 0x38ec94: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x38ec94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_38ec98:
    // 0x38ec98: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x38ec98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_38ec9c:
    // 0x38ec9c: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x38ec9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_38eca0:
    // 0x38eca0: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x38eca0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_38eca4:
    // 0x38eca4: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x38eca4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_38eca8:
    // 0x38eca8: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x38eca8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_38ecac:
    // 0x38ecac: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x38ecacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_38ecb0:
    // 0x38ecb0: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x38ecb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_38ecb4:
    // 0x38ecb4: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x38ecb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_38ecb8:
    // 0x38ecb8: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x38ecb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_38ecbc:
    // 0x38ecbc: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x38ecbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_38ecc0:
    // 0x38ecc0: 0x68e3001f  ldl         $v1, 0x1F($a3)
    ctx->pc = 0x38ecc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_38ecc4:
    // 0x38ecc4: 0x6ce30018  ldr         $v1, 0x18($a3)
    ctx->pc = 0x38ecc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_38ecc8:
    // 0x38ecc8: 0x68e50027  ldl         $a1, 0x27($a3)
    ctx->pc = 0x38ecc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_38eccc:
    // 0x38eccc: 0x6ce50020  ldr         $a1, 0x20($a3)
    ctx->pc = 0x38ecccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_38ecd0:
    // 0x38ecd0: 0x8ce60028  lw          $a2, 0x28($a3)
    ctx->pc = 0x38ecd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
label_38ecd4:
    // 0x38ecd4: 0xb3a3001f  sdl         $v1, 0x1F($sp)
    ctx->pc = 0x38ecd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_38ecd8:
    // 0x38ecd8: 0xb7a30018  sdr         $v1, 0x18($sp)
    ctx->pc = 0x38ecd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_38ecdc:
    // 0x38ecdc: 0xb3a50027  sdl         $a1, 0x27($sp)
    ctx->pc = 0x38ecdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_38ece0:
    // 0x38ece0: 0xb7a50020  sdr         $a1, 0x20($sp)
    ctx->pc = 0x38ece0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_38ece4:
    // 0x38ece4: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x38ece4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
label_38ece8:
    // 0x38ece8: 0xc0e3bf6  jal         func_38EFD8
label_38ecec:
    if (ctx->pc == 0x38ECECu) {
        ctx->pc = 0x38ECECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ECE8u;
        // 0x38ecec: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38ECF0u;
        goto label_38ecf0;
    }
    ctx->pc = 0x38ECE8u;
    SET_GPR_U32(ctx, 31, 0x38ECF0u);
    ctx->pc = 0x38ECECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38ECE8u;
    // 0x38ecec: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EFD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EFD8u, 0x38ECE8u, 0x38ECF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38ECF0u;
label_38ecf0:
    // 0x38ecf0: 0x10000004  b           . + 4 + (0x4 << 2)
label_38ecf4:
    if (ctx->pc == 0x38ECF4u) {
        ctx->pc = 0x38ECF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ECF0u;
        // 0x38ecf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38ECF8u;
        goto label_38ecf8;
    }
    ctx->pc = 0x38ECF0u;
    {
        const bool branch_taken_0x38ecf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38ECF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ECF0u;
        // 0x38ecf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ecf0) {
            ctx->pc = 0x38ED04u;
            goto label_38ed04;
        }
    }
    ctx->pc = 0x38ECF8u;
label_38ecf8:
    // 0x38ecf8: 0xc0e3b9c  jal         func_38EE70
label_38ecfc:
    if (ctx->pc == 0x38ECFCu) {
        ctx->pc = 0x38ED00u;
        goto label_38ed00;
    }
    ctx->pc = 0x38ECF8u;
    SET_GPR_U32(ctx, 31, 0x38ED00u);
    ctx->pc = 0x38EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EE70u, 0x38ECF8u, 0x38ED00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38ED00u;
label_38ed00:
    // 0x38ed00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38ed00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38ed04:
    // 0x38ed04: 0xc0e32f8  jal         func_38CBE0
label_38ed08:
    if (ctx->pc == 0x38ED08u) {
        ctx->pc = 0x38ED08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ED04u;
        // 0x38ed08: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38ED0Cu;
        goto label_38ed0c;
    }
    ctx->pc = 0x38ED04u;
    SET_GPR_U32(ctx, 31, 0x38ED0Cu);
    ctx->pc = 0x38ED08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38ED04u;
    // 0x38ed08: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CBE0u, 0x38ED04u, 0x38ED0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38ED0Cu;
label_38ed0c:
    // 0x38ed0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38ed0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38ed10:
    // 0x38ed10: 0x10510004  beq         $v0, $s1, . + 4 + (0x4 << 2)
label_38ed14:
    if (ctx->pc == 0x38ED14u) {
        ctx->pc = 0x38ED14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ED10u;
        // 0x38ed14: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38ED18u;
        goto label_38ed18;
    }
    ctx->pc = 0x38ED10u;
    {
        const bool branch_taken_0x38ed10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x38ED14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ED10u;
        // 0x38ed14: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ed10) {
            ctx->pc = 0x38ED24u;
            goto label_38ed24;
        }
    }
    ctx->pc = 0x38ED18u;
label_38ed18:
    // 0x38ed18: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x38ed18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
label_38ed1c:
    // 0x38ed1c: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
label_38ed20:
    if (ctx->pc == 0x38ED20u) {
        ctx->pc = 0x38ED24u;
        goto label_38ed24;
    }
    ctx->pc = 0x38ED1Cu;
    {
        const bool branch_taken_0x38ed1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38ed1c) {
            ctx->pc = 0x38ECF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38ecf8;
        }
    }
    ctx->pc = 0x38ED24u;
label_38ed24:
    // 0x38ed24: 0x241201b5  addiu       $s2, $zero, 0x1B5
    ctx->pc = 0x38ed24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 437));
label_38ed28:
    // 0x38ed28: 0x241401b2  addiu       $s4, $zero, 0x1B2
    ctx->pc = 0x38ed28u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 434));
label_38ed2c:
    // 0x38ed2c: 0x10000033  b           . + 4 + (0x33 << 2)
label_38ed30:
    if (ctx->pc == 0x38ED30u) {
        ctx->pc = 0x38ED30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ED2Cu;
        // 0x38ed30: 0x2413000a  addiu       $s3, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38ED34u;
        goto label_38ed34;
    }
    ctx->pc = 0x38ED2Cu;
    {
        const bool branch_taken_0x38ed2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38ED30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ED2Cu;
        // 0x38ed30: 0x2413000a  addiu       $s3, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ed2c) {
            ctx->pc = 0x38EDFCu;
            goto label_38edfc;
        }
    }
    ctx->pc = 0x38ED34u;
label_38ed34:
    // 0x38ed34: 0x0  nop
    ctx->pc = 0x38ed34u;
    // NOP
label_38ed38:
    // 0x38ed38: 0x1452001e  bne         $v0, $s2, . + 4 + (0x1E << 2)
label_38ed3c:
    if (ctx->pc == 0x38ED3Cu) {
        ctx->pc = 0x38ED3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ED38u;
        // 0x38ed3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38ED40u;
        goto label_38ed40;
    }
    ctx->pc = 0x38ED38u;
    {
        const bool branch_taken_0x38ed38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x38ED3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ED38u;
        // 0x38ed3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ed38) {
            ctx->pc = 0x38EDB4u;
            goto label_38edb4;
        }
    }
    ctx->pc = 0x38ED40u;
label_38ed40:
    // 0x38ed40: 0xc0e3bf4  jal         func_38EFD0
label_38ed44:
    if (ctx->pc == 0x38ED44u) {
        ctx->pc = 0x38ED44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ED40u;
        // 0x38ed44: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38ED48u;
        goto label_38ed48;
    }
    ctx->pc = 0x38ED40u;
    SET_GPR_U32(ctx, 31, 0x38ED48u);
    ctx->pc = 0x38ED44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38ED40u;
    // 0x38ed44: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EFD0u, 0x38ED40u, 0x38ED48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38ED48u;
label_38ed48:
    // 0x38ed48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38ed48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38ed4c:
    // 0x38ed4c: 0xc0e32be  jal         func_38CAF8
label_38ed50:
    if (ctx->pc == 0x38ED50u) {
        ctx->pc = 0x38ED50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ED4Cu;
        // 0x38ed50: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38ED54u;
        goto label_38ed54;
    }
    ctx->pc = 0x38ED4Cu;
    SET_GPR_U32(ctx, 31, 0x38ED54u);
    ctx->pc = 0x38ED50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38ED4Cu;
    // 0x38ed50: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CAF8u, 0x38ED4Cu, 0x38ED54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38ED54u;
label_38ed54:
    // 0x38ed54: 0x262182b  sltu        $v1, $s3, $v0
    ctx->pc = 0x38ed54u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_38ed58:
    // 0x38ed58: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x38ed58u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_38ed5c:
    // 0x38ed5c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x38ed5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_38ed60:
    // 0x38ed60: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x38ed60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_38ed64:
    // 0x38ed64: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x38ed64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_38ed68:
    // 0x38ed68: 0x40f809  jalr        $v0
label_38ed6c:
    if (ctx->pc == 0x38ED6Cu) {
        ctx->pc = 0x38ED6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ED68u;
        // 0x38ed6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38ED70u;
        goto label_38ed70;
    }
    ctx->pc = 0x38ED68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x38ED70u);
        ctx->pc = 0x38ED6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ED68u;
        // 0x38ed6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38ED68u, 0x38ED70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x38ED70u;
label_38ed70:
    // 0x38ed70: 0xc0e3bf6  jal         func_38EFD8
label_38ed74:
    if (ctx->pc == 0x38ED74u) {
        ctx->pc = 0x38ED74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ED70u;
        // 0x38ed74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38ED78u;
        goto label_38ed78;
    }
    ctx->pc = 0x38ED70u;
    SET_GPR_U32(ctx, 31, 0x38ED78u);
    ctx->pc = 0x38ED74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38ED70u;
    // 0x38ed74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EFD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EFD8u, 0x38ED70u, 0x38ED78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38ED78u;
label_38ed78:
    // 0x38ed78: 0x10000004  b           . + 4 + (0x4 << 2)
label_38ed7c:
    if (ctx->pc == 0x38ED7Cu) {
        ctx->pc = 0x38ED7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ED78u;
        // 0x38ed7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38ED80u;
        goto label_38ed80;
    }
    ctx->pc = 0x38ED78u;
    {
        const bool branch_taken_0x38ed78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38ED7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ED78u;
        // 0x38ed7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ed78) {
            ctx->pc = 0x38ED8Cu;
            goto label_38ed8c;
        }
    }
    ctx->pc = 0x38ED80u;
label_38ed80:
    // 0x38ed80: 0xc0e3b9c  jal         func_38EE70
label_38ed84:
    if (ctx->pc == 0x38ED84u) {
        ctx->pc = 0x38ED88u;
        goto label_38ed88;
    }
    ctx->pc = 0x38ED80u;
    SET_GPR_U32(ctx, 31, 0x38ED88u);
    ctx->pc = 0x38EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EE70u, 0x38ED80u, 0x38ED88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38ED88u;
label_38ed88:
    // 0x38ed88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38ed88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38ed8c:
    // 0x38ed8c: 0xc0e32f8  jal         func_38CBE0
label_38ed90:
    if (ctx->pc == 0x38ED90u) {
        ctx->pc = 0x38ED90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ED8Cu;
        // 0x38ed90: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38ED94u;
        goto label_38ed94;
    }
    ctx->pc = 0x38ED8Cu;
    SET_GPR_U32(ctx, 31, 0x38ED94u);
    ctx->pc = 0x38ED90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38ED8Cu;
    // 0x38ed90: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CBE0u, 0x38ED8Cu, 0x38ED94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38ED94u;
label_38ed94:
    // 0x38ed94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38ed94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38ed98:
    // 0x38ed98: 0x10510019  beq         $v0, $s1, . + 4 + (0x19 << 2)
label_38ed9c:
    if (ctx->pc == 0x38ED9Cu) {
        ctx->pc = 0x38ED9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ED98u;
        // 0x38ed9c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38EDA0u;
        goto label_38eda0;
    }
    ctx->pc = 0x38ED98u;
    {
        const bool branch_taken_0x38ed98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x38ED9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38ED98u;
        // 0x38ed9c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ed98) {
            ctx->pc = 0x38EE00u;
            goto label_38ee00;
        }
    }
    ctx->pc = 0x38EDA0u;
label_38eda0:
    // 0x38eda0: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x38eda0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
label_38eda4:
    // 0x38eda4: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
label_38eda8:
    if (ctx->pc == 0x38EDA8u) {
        ctx->pc = 0x38EDACu;
        goto label_38edac;
    }
    ctx->pc = 0x38EDA4u;
    {
        const bool branch_taken_0x38eda4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38eda4) {
            ctx->pc = 0x38ED80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38ed80;
        }
    }
    ctx->pc = 0x38EDACu;
label_38edac:
    // 0x38edac: 0x10000013  b           . + 4 + (0x13 << 2)
label_38edb0:
    if (ctx->pc == 0x38EDB0u) {
        ctx->pc = 0x38EDB4u;
        goto label_38edb4;
    }
    ctx->pc = 0x38EDACu;
    {
        const bool branch_taken_0x38edac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38edac) {
            ctx->pc = 0x38EDFCu;
            goto label_38edfc;
        }
    }
    ctx->pc = 0x38EDB4u;
label_38edb4:
    // 0x38edb4: 0xc0e3bf4  jal         func_38EFD0
label_38edb8:
    if (ctx->pc == 0x38EDB8u) {
        ctx->pc = 0x38EDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EDB4u;
        // 0x38edb8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38EDBCu;
        goto label_38edbc;
    }
    ctx->pc = 0x38EDB4u;
    SET_GPR_U32(ctx, 31, 0x38EDBCu);
    ctx->pc = 0x38EDB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EDB4u;
    // 0x38edb8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EFD0u, 0x38EDB4u, 0x38EDBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EDBCu;
label_38edbc:
    // 0x38edbc: 0xc0e3bf6  jal         func_38EFD8
label_38edc0:
    if (ctx->pc == 0x38EDC0u) {
        ctx->pc = 0x38EDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EDBCu;
        // 0x38edc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38EDC4u;
        goto label_38edc4;
    }
    ctx->pc = 0x38EDBCu;
    SET_GPR_U32(ctx, 31, 0x38EDC4u);
    ctx->pc = 0x38EDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EDBCu;
    // 0x38edc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38EFD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EFD8u, 0x38EDBCu, 0x38EDC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EDC4u;
label_38edc4:
    // 0x38edc4: 0x10000005  b           . + 4 + (0x5 << 2)
label_38edc8:
    if (ctx->pc == 0x38EDC8u) {
        ctx->pc = 0x38EDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EDC4u;
        // 0x38edc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38EDCCu;
        goto label_38edcc;
    }
    ctx->pc = 0x38EDC4u;
    {
        const bool branch_taken_0x38edc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38EDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EDC4u;
        // 0x38edc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38edc4) {
            ctx->pc = 0x38EDDCu;
            goto label_38eddc;
        }
    }
    ctx->pc = 0x38EDCCu;
label_38edcc:
    // 0x38edcc: 0x0  nop
    ctx->pc = 0x38edccu;
    // NOP
label_38edd0:
    // 0x38edd0: 0xc0e3b9c  jal         func_38EE70
label_38edd4:
    if (ctx->pc == 0x38EDD4u) {
        ctx->pc = 0x38EDD8u;
        goto label_38edd8;
    }
    ctx->pc = 0x38EDD0u;
    SET_GPR_U32(ctx, 31, 0x38EDD8u);
    ctx->pc = 0x38EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38EE70u, 0x38EDD0u, 0x38EDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EDD8u;
label_38edd8:
    // 0x38edd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38edd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38eddc:
    // 0x38eddc: 0xc0e32f8  jal         func_38CBE0
label_38ede0:
    if (ctx->pc == 0x38EDE0u) {
        ctx->pc = 0x38EDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EDDCu;
        // 0x38ede0: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38EDE4u;
        goto label_38ede4;
    }
    ctx->pc = 0x38EDDCu;
    SET_GPR_U32(ctx, 31, 0x38EDE4u);
    ctx->pc = 0x38EDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EDDCu;
    // 0x38ede0: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CBE0u, 0x38EDDCu, 0x38EDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EDE4u;
label_38ede4:
    // 0x38ede4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38ede4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38ede8:
    // 0x38ede8: 0x10510005  beq         $v0, $s1, . + 4 + (0x5 << 2)
label_38edec:
    if (ctx->pc == 0x38EDECu) {
        ctx->pc = 0x38EDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EDE8u;
        // 0x38edec: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38EDF0u;
        goto label_38edf0;
    }
    ctx->pc = 0x38EDE8u;
    {
        const bool branch_taken_0x38ede8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x38EDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EDE8u;
        // 0x38edec: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ede8) {
            ctx->pc = 0x38EE00u;
            goto label_38ee00;
        }
    }
    ctx->pc = 0x38EDF0u;
label_38edf0:
    // 0x38edf0: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x38edf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
label_38edf4:
    // 0x38edf4: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
label_38edf8:
    if (ctx->pc == 0x38EDF8u) {
        ctx->pc = 0x38EDFCu;
        goto label_38edfc;
    }
    ctx->pc = 0x38EDF4u;
    {
        const bool branch_taken_0x38edf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38edf4) {
            ctx->pc = 0x38EDD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38edd0;
        }
    }
    ctx->pc = 0x38EDFCu;
label_38edfc:
    // 0x38edfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38edfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_38ee00:
    // 0x38ee00: 0xc0e32f8  jal         func_38CBE0
label_38ee04:
    if (ctx->pc == 0x38EE04u) {
        ctx->pc = 0x38EE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EE00u;
        // 0x38ee04: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38EE08u;
        goto label_38ee08;
    }
    ctx->pc = 0x38EE00u;
    SET_GPR_U32(ctx, 31, 0x38EE08u);
    ctx->pc = 0x38EE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38EE00u;
    // 0x38ee04: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CBE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CBE0u, 0x38EE00u, 0x38EE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38EE08u;
label_38ee08:
    // 0x38ee08: 0x1052ffcd  beq         $v0, $s2, . + 4 + (-0x33 << 2)
label_38ee0c:
    if (ctx->pc == 0x38EE0Cu) {
        ctx->pc = 0x38EE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EE08u;
        // 0x38ee0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38EE10u;
        goto label_38ee10;
    }
    ctx->pc = 0x38EE08u;
    {
        const bool branch_taken_0x38ee08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x38EE0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EE08u;
        // 0x38ee0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ee08) {
            ctx->pc = 0x38ED40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38ed40;
        }
    }
    ctx->pc = 0x38EE10u;
label_38ee10:
    // 0x38ee10: 0x1054ffc9  beq         $v0, $s4, . + 4 + (-0x37 << 2)
label_38ee14:
    if (ctx->pc == 0x38EE14u) {
        ctx->pc = 0x38EE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EE10u;
        // 0x38ee14: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38EE18u;
        goto label_38ee18;
    }
    ctx->pc = 0x38EE10u;
    {
        const bool branch_taken_0x38ee10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x38EE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EE10u;
        // 0x38ee14: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ee10) {
            ctx->pc = 0x38ED38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_38ed38;
        }
    }
    ctx->pc = 0x38EE18u;
label_38ee18:
    // 0x38ee18: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x38ee18u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_38ee1c:
    // 0x38ee1c: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x38ee1cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_38ee20:
    // 0x38ee20: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x38ee20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_38ee24:
    // 0x38ee24: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x38ee24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_38ee28:
    // 0x38ee28: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x38ee28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_38ee2c:
    // 0x38ee2c: 0x3e00008  jr          $ra
label_38ee30:
    if (ctx->pc == 0x38EE30u) {
        ctx->pc = 0x38EE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EE2Cu;
        // 0x38ee30: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38EE34u;
        goto label_38ee34;
    }
    ctx->pc = 0x38EE2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38EE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38EE2Cu;
        // 0x38ee30: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38EE2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38EE34u;
label_38ee34:
    // 0x38ee34: 0x0  nop
    ctx->pc = 0x38ee34u;
    // NOP
    ctx->pc = 0x38ee38u;
}
