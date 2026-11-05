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

// Function: sub_00312B18
// Address: 0x312b18 - 0x312be0
void sub_00312B18_0x312b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00312B18_0x312b18");
#endif

    switch (ctx->pc) {
        case 0x312b58u: goto label_312b58;
        case 0x312b68u: goto label_312b68;
        case 0x312b78u: goto label_312b78;
        case 0x312b98u: goto label_312b98;
        case 0x312bacu: goto label_312bac;
        default: break;
    }

    ctx->pc = 0x312b18u;

    // 0x312b18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x312b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x312b1c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x312b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x312b20: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x312b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x312b24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x312b24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312b28: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x312b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x312b2c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x312b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x312b30: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x312b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x312b34: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x312b34u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x312b38: 0xfa010000  sqc2        $vf1, 0x0($s0)
    ctx->pc = 0x312b38u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x312b3c: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x312b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x312b40: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x312b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x312b44: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x312b44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x312b48: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x312b48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312b4c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x312b4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312b50: 0xc0c4abc  jal         func_312AF0
    ctx->pc = 0x312B50u;
    SET_GPR_U32(ctx, 31, 0x312B58u);
    ctx->pc = 0x312B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312B50u;
    // 0x312b54: 0x8c44bcec  lw          $a0, -0x4314($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950124)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312AF0u, 0x312B50u, 0x312B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312B58u;
label_312b58:
    // 0x312b58: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x312b58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x312b5c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x312b5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312b60: 0xc0c4abc  jal         func_312AF0
    ctx->pc = 0x312B60u;
    SET_GPR_U32(ctx, 31, 0x312B68u);
    ctx->pc = 0x312B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312B60u;
    // 0x312b64: 0x8c64bcf8  lw          $a0, -0x4308($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950136)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312AF0u, 0x312B60u, 0x312B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312B68u;
label_312b68:
    // 0x312b68: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x312b68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x312b6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x312b6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312b70: 0xc0c4abc  jal         func_312AF0
    ctx->pc = 0x312B70u;
    SET_GPR_U32(ctx, 31, 0x312B78u);
    ctx->pc = 0x312B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312B70u;
    // 0x312b74: 0x8c64bcf0  lw          $a0, -0x4310($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950128)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312AF0u, 0x312B70u, 0x312B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312B78u;
label_312b78:
    // 0x312b78: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x312b78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x312b7c: 0x8c629dbc  lw          $v0, -0x6244($v1)
    ctx->pc = 0x312b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F9DBCu));
    // 0x312b80: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x312B80u;
    {
        const bool branch_taken_0x312b80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x312B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312B80u;
        // 0x312b84: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312b80) {
            ctx->pc = 0x312BBCu;
            goto label_312bbc;
        }
    }
    ctx->pc = 0x312B88u;
    // 0x312b88: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x312b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x312b8c: 0x2451ae30  addiu       $s1, $v0, -0x51D0
    ctx->pc = 0x312b8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946352));
    // 0x312b90: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x312b90u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6BAE30u));
    // 0x312b94: 0x0  nop
    ctx->pc = 0x312b94u;
    // NOP
label_312b98:
    // 0x312b98: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x312b98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312b9c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x312b9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x312ba0: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x312ba0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x312ba4: 0xc0c49f6  jal         func_3127D8
    ctx->pc = 0x312BA4u;
    SET_GPR_U32(ctx, 31, 0x312BACu);
    ctx->pc = 0x312BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312BA4u;
    // 0x312ba8: 0x8c440220  lw          $a0, 0x220($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 544)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3127D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3127D8u, 0x312BA4u, 0x312BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312BACu;
label_312bac:
    // 0x312bac: 0x8e639dbc  lw          $v1, -0x6244($s3)
    ctx->pc = 0x312bacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294942140)));
    // 0x312bb0: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x312bb0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x312bb4: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x312BB4u;
    {
        const bool branch_taken_0x312bb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x312bb4) {
            ctx->pc = 0x312BB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x312BB4u;
            // 0x312bb8: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x312B98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_312b98;
        }
    }
    ctx->pc = 0x312BBCu;
label_312bbc:
    // 0x312bbc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x312bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x312bc0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x312bc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x312bc4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x312bc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x312bc8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x312bc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x312bcc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x312bccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x312bd0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x312bd0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x312bd4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x312bd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x312bd8: 0x3e00008  jr          $ra
    ctx->pc = 0x312BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x312BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312BD8u;
        // 0x312bdc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x312BD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x312BE0u;
}
