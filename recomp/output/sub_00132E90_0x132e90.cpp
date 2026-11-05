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

// Function: sub_00132E90
// Address: 0x132e90 - 0x132f70
void sub_00132E90_0x132e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00132E90_0x132e90");
#endif

    switch (ctx->pc) {
        case 0x132e90u: goto label_132e90;
        case 0x132e94u: goto label_132e94;
        case 0x132e98u: goto label_132e98;
        case 0x132e9cu: goto label_132e9c;
        case 0x132ea0u: goto label_132ea0;
        case 0x132ea4u: goto label_132ea4;
        case 0x132ea8u: goto label_132ea8;
        case 0x132eacu: goto label_132eac;
        case 0x132eb0u: goto label_132eb0;
        case 0x132eb4u: goto label_132eb4;
        case 0x132eb8u: goto label_132eb8;
        case 0x132ebcu: goto label_132ebc;
        case 0x132ec0u: goto label_132ec0;
        case 0x132ec4u: goto label_132ec4;
        case 0x132ec8u: goto label_132ec8;
        case 0x132eccu: goto label_132ecc;
        case 0x132ed0u: goto label_132ed0;
        case 0x132ed4u: goto label_132ed4;
        case 0x132ed8u: goto label_132ed8;
        case 0x132edcu: goto label_132edc;
        case 0x132ee0u: goto label_132ee0;
        case 0x132ee4u: goto label_132ee4;
        case 0x132ee8u: goto label_132ee8;
        case 0x132eecu: goto label_132eec;
        case 0x132ef0u: goto label_132ef0;
        case 0x132ef4u: goto label_132ef4;
        case 0x132ef8u: goto label_132ef8;
        case 0x132efcu: goto label_132efc;
        case 0x132f00u: goto label_132f00;
        case 0x132f04u: goto label_132f04;
        case 0x132f08u: goto label_132f08;
        case 0x132f0cu: goto label_132f0c;
        case 0x132f10u: goto label_132f10;
        case 0x132f14u: goto label_132f14;
        case 0x132f18u: goto label_132f18;
        case 0x132f1cu: goto label_132f1c;
        case 0x132f20u: goto label_132f20;
        case 0x132f24u: goto label_132f24;
        case 0x132f28u: goto label_132f28;
        case 0x132f2cu: goto label_132f2c;
        case 0x132f30u: goto label_132f30;
        case 0x132f34u: goto label_132f34;
        case 0x132f38u: goto label_132f38;
        case 0x132f3cu: goto label_132f3c;
        case 0x132f40u: goto label_132f40;
        case 0x132f44u: goto label_132f44;
        case 0x132f48u: goto label_132f48;
        case 0x132f4cu: goto label_132f4c;
        case 0x132f50u: goto label_132f50;
        case 0x132f54u: goto label_132f54;
        case 0x132f58u: goto label_132f58;
        case 0x132f5cu: goto label_132f5c;
        case 0x132f60u: goto label_132f60;
        case 0x132f64u: goto label_132f64;
        case 0x132f68u: goto label_132f68;
        case 0x132f6cu: goto label_132f6c;
        default: break;
    }

    ctx->pc = 0x132e90u;

label_132e90:
    // 0x132e90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x132e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_132e94:
    // 0x132e94: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x132e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_132e98:
    // 0x132e98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x132e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_132e9c:
    // 0x132e9c: 0x3c110049  lui         $s1, 0x49
    ctx->pc = 0x132e9cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)73 << 16));
label_132ea0:
    // 0x132ea0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x132ea0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_132ea4:
    // 0x132ea4: 0x26318758  addiu       $s1, $s1, -0x78A8
    ctx->pc = 0x132ea4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294936408));
label_132ea8:
    // 0x132ea8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x132ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_132eac:
    // 0x132eac: 0xc041e54  jal         func_107950
label_132eb0:
    if (ctx->pc == 0x132EB0u) {
        ctx->pc = 0x132EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132EACu;
        // 0x132eb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132EB4u;
        goto label_132eb4;
    }
    ctx->pc = 0x132EACu;
    SET_GPR_U32(ctx, 31, 0x132EB4u);
    ctx->pc = 0x132EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132EACu;
    // 0x132eb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107950u, 0x132EACu, 0x132EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132EB4u;
label_132eb4:
    // 0x132eb4: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x132eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_132eb8:
    // 0x132eb8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x132eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_132ebc:
    // 0x132ebc: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x132ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_132ec0:
    // 0x132ec0: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x132ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_132ec4:
    // 0x132ec4: 0x40f809  jalr        $v0
label_132ec8:
    if (ctx->pc == 0x132EC8u) {
        ctx->pc = 0x132EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132EC4u;
        // 0x132ec8: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132ECCu;
        goto label_132ecc;
    }
    ctx->pc = 0x132EC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x132ECCu);
        ctx->pc = 0x132EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132EC4u;
        // 0x132ec8: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132EC4u, 0x132ECCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x132ECCu;
label_132ecc:
    // 0x132ecc: 0xc041e5c  jal         func_107970
label_132ed0:
    if (ctx->pc == 0x132ED0u) {
        ctx->pc = 0x132ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132ECCu;
        // 0x132ed0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132ED4u;
        goto label_132ed4;
    }
    ctx->pc = 0x132ECCu;
    SET_GPR_U32(ctx, 31, 0x132ED4u);
    ctx->pc = 0x132ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132ECCu;
    // 0x132ed0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107970u, 0x132ECCu, 0x132ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132ED4u;
label_132ed4:
    // 0x132ed4: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x132ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_132ed8:
    // 0x132ed8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x132ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_132edc:
    // 0x132edc: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x132edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_132ee0:
    // 0x132ee0: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x132ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_132ee4:
    // 0x132ee4: 0x40f809  jalr        $v0
label_132ee8:
    if (ctx->pc == 0x132EE8u) {
        ctx->pc = 0x132EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132EE4u;
        // 0x132ee8: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132EECu;
        goto label_132eec;
    }
    ctx->pc = 0x132EE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x132EECu);
        ctx->pc = 0x132EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132EE4u;
        // 0x132ee8: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132EE4u, 0x132EECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x132EECu;
label_132eec:
    // 0x132eec: 0xc041e64  jal         func_107990
label_132ef0:
    if (ctx->pc == 0x132EF0u) {
        ctx->pc = 0x132EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132EECu;
        // 0x132ef0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132EF4u;
        goto label_132ef4;
    }
    ctx->pc = 0x132EECu;
    SET_GPR_U32(ctx, 31, 0x132EF4u);
    ctx->pc = 0x132EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132EECu;
    // 0x132ef0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107990u, 0x132EECu, 0x132EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132EF4u;
label_132ef4:
    // 0x132ef4: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x132ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_132ef8:
    // 0x132ef8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x132ef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_132efc:
    // 0x132efc: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x132efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_132f00:
    // 0x132f00: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x132f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_132f04:
    // 0x132f04: 0x40f809  jalr        $v0
label_132f08:
    if (ctx->pc == 0x132F08u) {
        ctx->pc = 0x132F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132F04u;
        // 0x132f08: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132F0Cu;
        goto label_132f0c;
    }
    ctx->pc = 0x132F04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x132F0Cu);
        ctx->pc = 0x132F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132F04u;
        // 0x132f08: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132F04u, 0x132F0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x132F0Cu;
label_132f0c:
    // 0x132f0c: 0xc041d0e  jal         func_107438
label_132f10:
    if (ctx->pc == 0x132F10u) {
        ctx->pc = 0x132F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132F0Cu;
        // 0x132f10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132F14u;
        goto label_132f14;
    }
    ctx->pc = 0x132F0Cu;
    SET_GPR_U32(ctx, 31, 0x132F14u);
    ctx->pc = 0x132F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132F0Cu;
    // 0x132f10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107438u, 0x132F0Cu, 0x132F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132F14u;
label_132f14:
    // 0x132f14: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x132f14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_132f18:
    // 0x132f18: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x132f18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_132f1c:
    // 0x132f1c: 0x8e070010  lw          $a3, 0x10($s0)
    ctx->pc = 0x132f1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_132f20:
    // 0x132f20: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x132f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_132f24:
    // 0x132f24: 0x8e080014  lw          $t0, 0x14($s0)
    ctx->pc = 0x132f24u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_132f28:
    // 0x132f28: 0x8e090018  lw          $t1, 0x18($s0)
    ctx->pc = 0x132f28u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_132f2c:
    // 0x132f2c: 0xc04b43e  jal         func_12D0F8
label_132f30:
    if (ctx->pc == 0x132F30u) {
        ctx->pc = 0x132F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132F2Cu;
        // 0x132f30: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132F34u;
        goto label_132f34;
    }
    ctx->pc = 0x132F2Cu;
    SET_GPR_U32(ctx, 31, 0x132F34u);
    ctx->pc = 0x132F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132F2Cu;
    // 0x132f30: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D0F8u, 0x132F2Cu, 0x132F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132F34u;
label_132f34:
    // 0x132f34: 0xc041d0e  jal         func_107438
label_132f38:
    if (ctx->pc == 0x132F38u) {
        ctx->pc = 0x132F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132F34u;
        // 0x132f38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132F3Cu;
        goto label_132f3c;
    }
    ctx->pc = 0x132F34u;
    SET_GPR_U32(ctx, 31, 0x132F3Cu);
    ctx->pc = 0x132F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132F34u;
    // 0x132f38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107438u, 0x132F34u, 0x132F3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132F3Cu;
label_132f3c:
    // 0x132f3c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x132f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_132f40:
    // 0x132f40: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x132f40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_132f44:
    // 0x132f44: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x132f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_132f48:
    // 0x132f48: 0x8ca60004  lw          $a2, 0x4($a1)
    ctx->pc = 0x132f48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_132f4c:
    // 0x132f4c: 0x8ca70010  lw          $a3, 0x10($a1)
    ctx->pc = 0x132f4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_132f50:
    // 0x132f50: 0x8ca80014  lw          $t0, 0x14($a1)
    ctx->pc = 0x132f50u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_132f54:
    // 0x132f54: 0xc04b43e  jal         func_12D0F8
label_132f58:
    if (ctx->pc == 0x132F58u) {
        ctx->pc = 0x132F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132F54u;
        // 0x132f58: 0x8ca90018  lw          $t1, 0x18($a1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132F5Cu;
        goto label_132f5c;
    }
    ctx->pc = 0x132F54u;
    SET_GPR_U32(ctx, 31, 0x132F5Cu);
    ctx->pc = 0x132F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132F54u;
    // 0x132f58: 0x8ca90018  lw          $t1, 0x18($a1) (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D0F8u, 0x132F54u, 0x132F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132F5Cu;
label_132f5c:
    // 0x132f5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x132f5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_132f60:
    // 0x132f60: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x132f60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_132f64:
    // 0x132f64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x132f64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_132f68:
    // 0x132f68: 0x3e00008  jr          $ra
label_132f6c:
    if (ctx->pc == 0x132F6Cu) {
        ctx->pc = 0x132F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132F68u;
        // 0x132f6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x132F70u;
        goto label_fallthrough_0x132f68;
    }
    ctx->pc = 0x132F68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132F68u;
        // 0x132f6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132F68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x132f68:
    ctx->pc = 0x132F70u;
}
