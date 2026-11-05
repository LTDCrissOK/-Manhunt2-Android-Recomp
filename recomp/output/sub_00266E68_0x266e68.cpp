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

// Function: sub_00266E68
// Address: 0x266e68 - 0x267008
void sub_00266E68_0x266e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00266E68_0x266e68");
#endif

    switch (ctx->pc) {
        case 0x266e84u: goto label_266e84;
        case 0x266e94u: goto label_266e94;
        case 0x266ea8u: goto label_266ea8;
        case 0x266eb8u: goto label_266eb8;
        case 0x266f34u: goto label_266f34;
        case 0x266f80u: goto label_266f80;
        case 0x266f90u: goto label_266f90;
        case 0x266fa4u: goto label_266fa4;
        case 0x266fb4u: goto label_266fb4;
        case 0x266fe0u: goto label_266fe0;
        default: break;
    }

    ctx->pc = 0x266e68u;

    // 0x266e68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x266e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x266e6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x266e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x266e70: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x266e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x266e74: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x266e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x266e78: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x266e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x266e7c: 0xc0845aa  jal         func_2116A8
    ctx->pc = 0x266E7Cu;
    SET_GPR_U32(ctx, 31, 0x266E84u);
    ctx->pc = 0x266E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266E7Cu;
    // 0x266e80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2116A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2116A8u, 0x266E7Cu, 0x266E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266E84u;
label_266e84:
    // 0x266e84: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x266e84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x266e88: 0x8e040104  lw          $a0, 0x104($s0)
    ctx->pc = 0x266e88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x266e8c: 0xc0c2e94  jal         func_30BA50
    ctx->pc = 0x266E8Cu;
    SET_GPR_U32(ctx, 31, 0x266E94u);
    ctx->pc = 0x266E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266E8Cu;
    // 0x266e90: 0x24a57880  addiu       $a1, $a1, 0x7880 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30BA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30BA50u, 0x266E8Cu, 0x266E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266E94u;
label_266e94:
    // 0x266e94: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x266e94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266e98: 0x52200011  beql        $s1, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x266E98u;
    {
        const bool branch_taken_0x266e98 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x266e98) {
            ctx->pc = 0x266E9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x266E98u;
            // 0x266e9c: 0x8e030104  lw          $v1, 0x104($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x266EE0u;
            goto label_266ee0;
        }
    }
    ctx->pc = 0x266EA0u;
    // 0x266ea0: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x266EA0u;
    SET_GPR_U32(ctx, 31, 0x266EA8u);
    ctx->pc = 0x266EA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266EA0u;
    // 0x266ea4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x266EA0u, 0x266EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266EA8u;
label_266ea8:
    // 0x266ea8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x266EA8u;
    {
        const bool branch_taken_0x266ea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x266EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266EA8u;
        // 0x266eac: 0x262200b0  addiu       $v0, $s1, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266ea8) {
            ctx->pc = 0x266EBCu;
            goto label_266ebc;
        }
    }
    ctx->pc = 0x266EB0u;
    // 0x266eb0: 0xc0c4900  jal         func_312400
    ctx->pc = 0x266EB0u;
    SET_GPR_U32(ctx, 31, 0x266EB8u);
    ctx->pc = 0x266EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266EB0u;
    // 0x266eb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x266EB0u, 0x266EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266EB8u;
label_266eb8:
    // 0x266eb8: 0x262200b0  addiu       $v0, $s1, 0xB0
    ctx->pc = 0x266eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
label_266ebc:
    // 0x266ebc: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x266ebcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x266ec0: 0xfa0102b0  sqc2        $vf1, 0x2B0($s0)
    ctx->pc = 0x266ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 688), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x266ec4: 0x8e040220  lw          $a0, 0x220($s0)
    ctx->pc = 0x266ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x266ec8: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x266EC8u;
    {
        const bool branch_taken_0x266ec8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x266ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266EC8u;
        // 0x266ecc: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266ec8) {
            ctx->pc = 0x266F10u;
            goto label_266f10;
        }
    }
    ctx->pc = 0x266ED0u;
    // 0x266ed0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x266ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x266ed4: 0xac62bce4  sw          $v0, -0x431C($v1)
    ctx->pc = 0x266ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950116), GPR_U32(ctx, 2));
    // 0x266ed8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x266ED8u;
    {
        const bool branch_taken_0x266ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266ED8u;
        // 0x266edc: 0xac910000  sw          $s1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266ed8) {
            ctx->pc = 0x266F10u;
            goto label_266f10;
        }
    }
    ctx->pc = 0x266EE0u;
label_266ee0:
    // 0x266ee0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x266ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x266ee4: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x266ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x266ee8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x266ee8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x266eec: 0xfa0102b0  sqc2        $vf1, 0x2B0($s0)
    ctx->pc = 0x266eecu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 688), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x266ef0: 0x8e060220  lw          $a2, 0x220($s0)
    ctx->pc = 0x266ef0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x266ef4: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x266EF4u;
    {
        const bool branch_taken_0x266ef4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x266EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266EF4u;
        // 0x266ef8: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266ef4) {
            ctx->pc = 0x266F10u;
            goto label_266f10;
        }
    }
    ctx->pc = 0x266EFCu;
    // 0x266efc: 0x8e040104  lw          $a0, 0x104($s0)
    ctx->pc = 0x266efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x266f00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x266f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x266f04: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x266f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x266f08: 0xaca2bce4  sw          $v0, -0x431C($a1)
    ctx->pc = 0x266f08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294950116), GPR_U32(ctx, 2));
    // 0x266f0c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x266f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_266f10:
    // 0x266f10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x266f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x266f14: 0x92030296  lbu         $v1, 0x296($s0)
    ctx->pc = 0x266f14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 662)));
    // 0x266f18: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x266F18u;
    {
        const bool branch_taken_0x266f18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x266F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266F18u;
        // 0x266f1c: 0xa20202d4  sb          $v0, 0x2D4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 724), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266f18) {
            ctx->pc = 0x266F34u;
            goto label_266f34;
        }
    }
    ctx->pc = 0x266F20u;
    // 0x266f20: 0x92020292  lbu         $v0, 0x292($s0)
    ctx->pc = 0x266f20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 658)));
    // 0x266f24: 0x50400033  beql        $v0, $zero, . + 4 + (0x33 << 2)
    ctx->pc = 0x266F24u;
    {
        const bool branch_taken_0x266f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x266f24) {
            ctx->pc = 0x266F28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x266F24u;
            // 0x266f28: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x266FF4u;
            goto label_266ff4;
        }
    }
    ctx->pc = 0x266F2Cu;
    // 0x266f2c: 0xc09a07e  jal         func_2681F8
    ctx->pc = 0x266F2Cu;
    SET_GPR_U32(ctx, 31, 0x266F34u);
    ctx->pc = 0x266F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266F2Cu;
    // 0x266f30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2681F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2681F8u, 0x266F2Cu, 0x266F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266F34u;
label_266f34:
    // 0x266f34: 0x92020292  lbu         $v0, 0x292($s0)
    ctx->pc = 0x266f34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 658)));
    // 0x266f38: 0x5040002e  beql        $v0, $zero, . + 4 + (0x2E << 2)
    ctx->pc = 0x266F38u;
    {
        const bool branch_taken_0x266f38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x266f38) {
            ctx->pc = 0x266F3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x266F38u;
            // 0x266f3c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x266FF4u;
            goto label_266ff4;
        }
    }
    ctx->pc = 0x266F40u;
    // 0x266f40: 0x92020297  lbu         $v0, 0x297($s0)
    ctx->pc = 0x266f40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 663)));
    // 0x266f44: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x266F44u;
    {
        const bool branch_taken_0x266f44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x266F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266F44u;
        // 0x266f48: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266f44) {
            ctx->pc = 0x266FF0u;
            goto label_266ff0;
        }
    }
    ctx->pc = 0x266F4Cu;
    // 0x266f4c: 0x8e020220  lw          $v0, 0x220($s0)
    ctx->pc = 0x266f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x266f50: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x266f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x266f54: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x266F54u;
    {
        const bool branch_taken_0x266f54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x266F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266F54u;
        // 0x266f58: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266f54) {
            ctx->pc = 0x266F64u;
            goto label_266f64;
        }
    }
    ctx->pc = 0x266F5Cu;
    // 0x266f5c: 0x54820025  bnel        $a0, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x266F5Cu;
    {
        const bool branch_taken_0x266f5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x266f5c) {
            ctx->pc = 0x266F60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x266F5Cu;
            // 0x266f60: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x266FF4u;
            goto label_266ff4;
        }
    }
    ctx->pc = 0x266F64u;
label_266f64:
    // 0x266f64: 0x8e0202d8  lw          $v0, 0x2D8($s0)
    ctx->pc = 0x266f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x266f68: 0x54400022  bnel        $v0, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x266F68u;
    {
        const bool branch_taken_0x266f68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x266f68) {
            ctx->pc = 0x266F6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x266F68u;
            // 0x266f6c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x266FF4u;
            goto label_266ff4;
        }
    }
    ctx->pc = 0x266F70u;
    // 0x266f70: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x266F70u;
    {
        const bool branch_taken_0x266f70 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x266f70) {
            ctx->pc = 0x266F88u;
            goto label_266f88;
        }
    }
    ctx->pc = 0x266F78u;
    // 0x266f78: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x266F78u;
    SET_GPR_U32(ctx, 31, 0x266F80u);
    ctx->pc = 0x266F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266F78u;
    // 0x266f7c: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x266F78u, 0x266F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266F80u;
label_266f80:
    // 0x266f80: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x266F80u;
    {
        const bool branch_taken_0x266f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x266F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266F80u;
        // 0x266f84: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266f80) {
            ctx->pc = 0x266F9Cu;
            goto label_266f9c;
        }
    }
    ctx->pc = 0x266F88u;
label_266f88:
    // 0x266f88: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x266F88u;
    SET_GPR_U32(ctx, 31, 0x266F90u);
    ctx->pc = 0x266F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266F88u;
    // 0x266f8c: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x266F88u, 0x266F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266F90u;
label_266f90:
    // 0x266f90: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x266f90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266f94: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x266f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x266f98: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x266f98u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_266f9c:
    // 0x266f9c: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x266F9Cu;
    SET_GPR_U32(ctx, 31, 0x266FA4u);
    ctx->pc = 0x266FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266F9Cu;
    // 0x266fa0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x266F9Cu, 0x266FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266FA4u;
label_266fa4:
    // 0x266fa4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x266FA4u;
    {
        const bool branch_taken_0x266fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x266FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266FA4u;
        // 0x266fa8: 0x3c070046  lui         $a3, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x266fa4) {
            ctx->pc = 0x266FB8u;
            goto label_266fb8;
        }
    }
    ctx->pc = 0x266FACu;
    // 0x266fac: 0xc0c4900  jal         func_312400
    ctx->pc = 0x266FACu;
    SET_GPR_U32(ctx, 31, 0x266FB4u);
    ctx->pc = 0x266FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266FACu;
    // 0x266fb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x266FACu, 0x266FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266FB4u;
label_266fb4:
    // 0x266fb4: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x266fb4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
label_266fb8:
    // 0x266fb8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x266fb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x266fbc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x266fbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x266fc0: 0x3c014234  lui         $at, 0x4234
    ctx->pc = 0x266fc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16948 << 16));
    // 0x266fc4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x266fc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x266fc8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x266fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266fcc: 0x26260080  addiu       $a2, $s1, 0x80
    ctx->pc = 0x266fccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x266fd0: 0x24e77888  addiu       $a3, $a3, 0x7888
    ctx->pc = 0x266fd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 30856));
    // 0x266fd4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x266fd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266fd8: 0xc0d6416  jal         func_359058
    ctx->pc = 0x266FD8u;
    SET_GPR_U32(ctx, 31, 0x266FE0u);
    ctx->pc = 0x266FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266FD8u;
    // 0x266fdc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x359058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359058u, 0x266FD8u, 0x266FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266FE0u;
label_266fe0:
    // 0x266fe0: 0xae0202d8  sw          $v0, 0x2D8($s0)
    ctx->pc = 0x266fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 2));
    // 0x266fe4: 0x8e0302d8  lw          $v1, 0x2D8($s0)
    ctx->pc = 0x266fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 728)));
    // 0x266fe8: 0x92020293  lbu         $v0, 0x293($s0)
    ctx->pc = 0x266fe8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 659)));
    // 0x266fec: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x266fecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_266ff0:
    // 0x266ff0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x266ff0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_266ff4:
    // 0x266ff4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x266ff4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x266ff8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x266ff8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x266ffc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x266ffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x267000: 0x3e00008  jr          $ra
    ctx->pc = 0x267000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x267004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267000u;
        // 0x267004: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x267000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x267008u;
}
