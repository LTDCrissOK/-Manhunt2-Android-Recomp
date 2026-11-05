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

// Function: sub_001F1E78
// Address: 0x1f1e78 - 0x1f1f78
void sub_001F1E78_0x1f1e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F1E78_0x1f1e78");
#endif

    switch (ctx->pc) {
        case 0x1f1e78u: goto label_1f1e78;
        case 0x1f1e7cu: goto label_1f1e7c;
        case 0x1f1e80u: goto label_1f1e80;
        case 0x1f1e84u: goto label_1f1e84;
        case 0x1f1e88u: goto label_1f1e88;
        case 0x1f1e8cu: goto label_1f1e8c;
        case 0x1f1e90u: goto label_1f1e90;
        case 0x1f1e94u: goto label_1f1e94;
        case 0x1f1e98u: goto label_1f1e98;
        case 0x1f1e9cu: goto label_1f1e9c;
        case 0x1f1ea0u: goto label_1f1ea0;
        case 0x1f1ea4u: goto label_1f1ea4;
        case 0x1f1ea8u: goto label_1f1ea8;
        case 0x1f1eacu: goto label_1f1eac;
        case 0x1f1eb0u: goto label_1f1eb0;
        case 0x1f1eb4u: goto label_1f1eb4;
        case 0x1f1eb8u: goto label_1f1eb8;
        case 0x1f1ebcu: goto label_1f1ebc;
        case 0x1f1ec0u: goto label_1f1ec0;
        case 0x1f1ec4u: goto label_1f1ec4;
        case 0x1f1ec8u: goto label_1f1ec8;
        case 0x1f1eccu: goto label_1f1ecc;
        case 0x1f1ed0u: goto label_1f1ed0;
        case 0x1f1ed4u: goto label_1f1ed4;
        case 0x1f1ed8u: goto label_1f1ed8;
        case 0x1f1edcu: goto label_1f1edc;
        case 0x1f1ee0u: goto label_1f1ee0;
        case 0x1f1ee4u: goto label_1f1ee4;
        case 0x1f1ee8u: goto label_1f1ee8;
        case 0x1f1eecu: goto label_1f1eec;
        case 0x1f1ef0u: goto label_1f1ef0;
        case 0x1f1ef4u: goto label_1f1ef4;
        case 0x1f1ef8u: goto label_1f1ef8;
        case 0x1f1efcu: goto label_1f1efc;
        case 0x1f1f00u: goto label_1f1f00;
        case 0x1f1f04u: goto label_1f1f04;
        case 0x1f1f08u: goto label_1f1f08;
        case 0x1f1f0cu: goto label_1f1f0c;
        case 0x1f1f10u: goto label_1f1f10;
        case 0x1f1f14u: goto label_1f1f14;
        case 0x1f1f18u: goto label_1f1f18;
        case 0x1f1f1cu: goto label_1f1f1c;
        case 0x1f1f20u: goto label_1f1f20;
        case 0x1f1f24u: goto label_1f1f24;
        case 0x1f1f28u: goto label_1f1f28;
        case 0x1f1f2cu: goto label_1f1f2c;
        case 0x1f1f30u: goto label_1f1f30;
        case 0x1f1f34u: goto label_1f1f34;
        case 0x1f1f38u: goto label_1f1f38;
        case 0x1f1f3cu: goto label_1f1f3c;
        case 0x1f1f40u: goto label_1f1f40;
        case 0x1f1f44u: goto label_1f1f44;
        case 0x1f1f48u: goto label_1f1f48;
        case 0x1f1f4cu: goto label_1f1f4c;
        case 0x1f1f50u: goto label_1f1f50;
        case 0x1f1f54u: goto label_1f1f54;
        case 0x1f1f58u: goto label_1f1f58;
        case 0x1f1f5cu: goto label_1f1f5c;
        case 0x1f1f60u: goto label_1f1f60;
        case 0x1f1f64u: goto label_1f1f64;
        case 0x1f1f68u: goto label_1f1f68;
        case 0x1f1f6cu: goto label_1f1f6c;
        case 0x1f1f70u: goto label_1f1f70;
        case 0x1f1f74u: goto label_1f1f74;
        default: break;
    }

    ctx->pc = 0x1f1e78u;

label_1f1e78:
    // 0x1f1e78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f1e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1f1e7c:
    // 0x1f1e7c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f1e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1f1e80:
    // 0x1f1e80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f1e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1f1e84:
    // 0x1f1e84: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1f1e84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f1e88:
    // 0x1f1e88: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f1e88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1f1e8c:
    // 0x1f1e8c: 0x2451021  addu        $v0, $s2, $a1
    ctx->pc = 0x1f1e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
label_1f1e90:
    // 0x1f1e90: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1f1e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1f1e94:
    // 0x1f1e94: 0x90437ab4  lbu         $v1, 0x7AB4($v0)
    ctx->pc = 0x1f1e94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 31412)));
label_1f1e98:
    // 0x1f1e98: 0x10600031  beqz        $v1, . + 4 + (0x31 << 2)
label_1f1e9c:
    if (ctx->pc == 0x1F1E9Cu) {
        ctx->pc = 0x1F1E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1E98u;
        // 0x1f1e9c: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1EA0u;
        goto label_1f1ea0;
    }
    ctx->pc = 0x1F1E98u;
    {
        const bool branch_taken_0x1f1e98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1E98u;
        // 0x1f1e9c: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1e98) {
            ctx->pc = 0x1F1F60u;
            goto label_1f1f60;
        }
    }
    ctx->pc = 0x1F1EA0u;
label_1f1ea0:
    // 0x1f1ea0: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x1f1ea0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1f1ea4:
    // 0x1f1ea4: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x1f1ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_1f1ea8:
    // 0x1f1ea8: 0x8c514f94  lw          $s1, 0x4F94($v0)
    ctx->pc = 0x1f1ea8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20372)));
label_1f1eac:
    // 0x1f1eac: 0xc08fcf0  jal         func_23F3C0
label_1f1eb0:
    if (ctx->pc == 0x1F1EB0u) {
        ctx->pc = 0x1F1EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1EACu;
        // 0x1f1eb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1EB4u;
        goto label_1f1eb4;
    }
    ctx->pc = 0x1F1EACu;
    SET_GPR_U32(ctx, 31, 0x1F1EB4u);
    ctx->pc = 0x1F1EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1EACu;
    // 0x1f1eb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F3C0u, 0x1F1EACu, 0x1F1EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1EB4u;
label_1f1eb4:
    // 0x1f1eb4: 0xc081d36  jal         func_2074D8
label_1f1eb8:
    if (ctx->pc == 0x1F1EB8u) {
        ctx->pc = 0x1F1EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1EB4u;
        // 0x1f1eb8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1EBCu;
        goto label_1f1ebc;
    }
    ctx->pc = 0x1F1EB4u;
    SET_GPR_U32(ctx, 31, 0x1F1EBCu);
    ctx->pc = 0x1F1EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1EB4u;
    // 0x1f1eb8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2074D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2074D8u, 0x1F1EB4u, 0x1F1EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1EBCu;
label_1f1ebc:
    // 0x1f1ebc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f1ebcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f1ec0:
    // 0x1f1ec0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f1ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f1ec4:
    // 0x1f1ec4: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
label_1f1ec8:
    if (ctx->pc == 0x1F1EC8u) {
        ctx->pc = 0x1F1EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1EC4u;
        // 0x1f1ec8: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1ECCu;
        goto label_1f1ecc;
    }
    ctx->pc = 0x1F1EC4u;
    {
        const bool branch_taken_0x1f1ec4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F1EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1EC4u;
        // 0x1f1ec8: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1ec4) {
            ctx->pc = 0x1F1ED4u;
            goto label_1f1ed4;
        }
    }
    ctx->pc = 0x1F1ECCu;
label_1f1ecc:
    // 0x1f1ecc: 0x10000003  b           . + 4 + (0x3 << 2)
label_1f1ed0:
    if (ctx->pc == 0x1F1ED0u) {
        ctx->pc = 0x1F1ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1ECCu;
        // 0x1f1ed0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1ED4u;
        goto label_1f1ed4;
    }
    ctx->pc = 0x1F1ECCu;
    {
        const bool branch_taken_0x1f1ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1ECCu;
        // 0x1f1ed0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1ecc) {
            ctx->pc = 0x1F1EDCu;
            goto label_1f1edc;
        }
    }
    ctx->pc = 0x1F1ED4u;
label_1f1ed4:
    // 0x1f1ed4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1f1ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f1ed8:
    // 0x1f1ed8: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1f1ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1f1edc:
    // 0x1f1edc: 0x10800021  beqz        $a0, . + 4 + (0x21 << 2)
label_1f1ee0:
    if (ctx->pc == 0x1F1EE0u) {
        ctx->pc = 0x1F1EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1EDCu;
        // 0x1f1ee0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1EE4u;
        goto label_1f1ee4;
    }
    ctx->pc = 0x1F1EDCu;
    {
        const bool branch_taken_0x1f1edc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1EDCu;
        // 0x1f1ee0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1edc) {
            ctx->pc = 0x1F1F64u;
            goto label_1f1f64;
        }
    }
    ctx->pc = 0x1F1EE4u;
label_1f1ee4:
    // 0x1f1ee4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1f1ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1f1ee8:
    // 0x1f1ee8: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1f1ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_1f1eec:
    // 0x1f1eec: 0x60f809  jalr        $v1
label_1f1ef0:
    if (ctx->pc == 0x1F1EF0u) {
        ctx->pc = 0x1F1EF4u;
        goto label_1f1ef4;
    }
    ctx->pc = 0x1F1EECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F1EF4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1EECu, 0x1F1EF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F1EF4u;
label_1f1ef4:
    // 0x1f1ef4: 0xc081d36  jal         func_2074D8
label_1f1ef8:
    if (ctx->pc == 0x1F1EF8u) {
        ctx->pc = 0x1F1EFCu;
        goto label_1f1efc;
    }
    ctx->pc = 0x1F1EF4u;
    SET_GPR_U32(ctx, 31, 0x1F1EFCu);
    ctx->pc = 0x2074D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2074D8u, 0x1F1EF4u, 0x1F1EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1EFCu;
label_1f1efc:
    // 0x1f1efc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f1efcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f1f00:
    // 0x1f1f00: 0xc08fcf0  jal         func_23F3C0
label_1f1f04:
    if (ctx->pc == 0x1F1F04u) {
        ctx->pc = 0x1F1F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1F00u;
        // 0x1f1f04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1F08u;
        goto label_1f1f08;
    }
    ctx->pc = 0x1F1F00u;
    SET_GPR_U32(ctx, 31, 0x1F1F08u);
    ctx->pc = 0x1F1F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1F00u;
    // 0x1f1f04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F3C0u, 0x1F1F00u, 0x1F1F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1F08u;
label_1f1f08:
    // 0x1f1f08: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f1f08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f1f0c:
    // 0x1f1f0c: 0xc081e8e  jal         func_207A38
label_1f1f10:
    if (ctx->pc == 0x1F1F10u) {
        ctx->pc = 0x1F1F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1F0Cu;
        // 0x1f1f10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1F14u;
        goto label_1f1f14;
    }
    ctx->pc = 0x1F1F0Cu;
    SET_GPR_U32(ctx, 31, 0x1F1F14u);
    ctx->pc = 0x1F1F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1F0Cu;
    // 0x1f1f10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207A38u, 0x1F1F0Cu, 0x1F1F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1F14u;
label_1f1f14:
    // 0x1f1f14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f1f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f1f18:
    // 0x1f1f18: 0xc08fcf2  jal         func_23F3C8
label_1f1f1c:
    if (ctx->pc == 0x1F1F1Cu) {
        ctx->pc = 0x1F1F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1F18u;
        // 0x1f1f1c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1F20u;
        goto label_1f1f20;
    }
    ctx->pc = 0x1F1F18u;
    SET_GPR_U32(ctx, 31, 0x1F1F20u);
    ctx->pc = 0x1F1F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1F18u;
    // 0x1f1f1c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F3C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F3C8u, 0x1F1F18u, 0x1F1F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1F20u;
label_1f1f20:
    // 0x1f1f20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f1f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f1f24:
    // 0x1f1f24: 0x262502bc  addiu       $a1, $s1, 0x2BC
    ctx->pc = 0x1f1f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 700));
label_1f1f28:
    // 0x1f1f28: 0xc07e654  jal         func_1F9950
label_1f1f2c:
    if (ctx->pc == 0x1F1F2Cu) {
        ctx->pc = 0x1F1F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1F28u;
        // 0x1f1f2c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1F30u;
        goto label_1f1f30;
    }
    ctx->pc = 0x1F1F28u;
    SET_GPR_U32(ctx, 31, 0x1F1F30u);
    ctx->pc = 0x1F1F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1F28u;
    // 0x1f1f2c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9950u, 0x1F1F28u, 0x1F1F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1F30u;
label_1f1f30:
    // 0x1f1f30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f1f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f1f34:
    // 0x1f1f34: 0x262502c0  addiu       $a1, $s1, 0x2C0
    ctx->pc = 0x1f1f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
label_1f1f38:
    // 0x1f1f38: 0xc07e654  jal         func_1F9950
label_1f1f3c:
    if (ctx->pc == 0x1F1F3Cu) {
        ctx->pc = 0x1F1F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1F38u;
        // 0x1f1f3c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1F40u;
        goto label_1f1f40;
    }
    ctx->pc = 0x1F1F38u;
    SET_GPR_U32(ctx, 31, 0x1F1F40u);
    ctx->pc = 0x1F1F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1F38u;
    // 0x1f1f3c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9950u, 0x1F1F38u, 0x1F1F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1F40u;
label_1f1f40:
    // 0x1f1f40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f1f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f1f44:
    // 0x1f1f44: 0x262502c4  addiu       $a1, $s1, 0x2C4
    ctx->pc = 0x1f1f44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 708));
label_1f1f48:
    // 0x1f1f48: 0xc07e654  jal         func_1F9950
label_1f1f4c:
    if (ctx->pc == 0x1F1F4Cu) {
        ctx->pc = 0x1F1F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1F48u;
        // 0x1f1f4c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1F50u;
        goto label_1f1f50;
    }
    ctx->pc = 0x1F1F48u;
    SET_GPR_U32(ctx, 31, 0x1F1F50u);
    ctx->pc = 0x1F1F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1F48u;
    // 0x1f1f4c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9950u, 0x1F1F48u, 0x1F1F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1F50u;
label_1f1f50:
    // 0x1f1f50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f1f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f1f54:
    // 0x1f1f54: 0x262502c8  addiu       $a1, $s1, 0x2C8
    ctx->pc = 0x1f1f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 712));
label_1f1f58:
    // 0x1f1f58: 0xc07e654  jal         func_1F9950
label_1f1f5c:
    if (ctx->pc == 0x1F1F5Cu) {
        ctx->pc = 0x1F1F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1F58u;
        // 0x1f1f5c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1F60u;
        goto label_1f1f60;
    }
    ctx->pc = 0x1F1F58u;
    SET_GPR_U32(ctx, 31, 0x1F1F60u);
    ctx->pc = 0x1F1F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1F58u;
    // 0x1f1f5c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9950u, 0x1F1F58u, 0x1F1F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1F60u;
label_1f1f60:
    // 0x1f1f60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f1f60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f1f64:
    // 0x1f1f64: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f1f64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1f1f68:
    // 0x1f1f68: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f1f68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1f1f6c:
    // 0x1f1f6c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1f1f6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1f1f70:
    // 0x1f1f70: 0x3e00008  jr          $ra
label_1f1f74:
    if (ctx->pc == 0x1F1F74u) {
        ctx->pc = 0x1F1F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1F70u;
        // 0x1f1f74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F1F78u;
        goto label_fallthrough_0x1f1f70;
    }
    ctx->pc = 0x1F1F70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1F70u;
        // 0x1f1f74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1F70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1f1f70:
    ctx->pc = 0x1F1F78u;
}
