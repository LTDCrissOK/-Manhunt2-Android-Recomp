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

// Function: sub_00384A50
// Address: 0x384a50 - 0x384b28
void sub_00384A50_0x384a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00384A50_0x384a50");
#endif

    switch (ctx->pc) {
        case 0x384a90u: goto label_384a90;
        case 0x384ac8u: goto label_384ac8;
        case 0x384ae0u: goto label_384ae0;
        case 0x384af0u: goto label_384af0;
        case 0x384af8u: goto label_384af8;
        default: break;
    }

    ctx->pc = 0x384a50u;

    // 0x384a50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x384a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x384a54: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x384a54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x384a58: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x384a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x384a5c: 0x2471dfe4  addiu       $s1, $v1, -0x201C
    ctx->pc = 0x384a5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959076));
    // 0x384a60: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x384a60u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FDFE4u));
    // 0x384a64: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x384a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x384a68: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x384a68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x384a6c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x384a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x384a70: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x384a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x384a74: 0x3442000a  ori         $v0, $v0, 0xA
    ctx->pc = 0x384a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10);
    // 0x384a78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x384a78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384a7c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x384a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384a80: 0x1065001e  beq         $v1, $a1, . + 4 + (0x1E << 2)
    ctx->pc = 0x384A80u;
    {
        const bool branch_taken_0x384a80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x384A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384A80u;
        // 0x384a84: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384a80) {
            ctx->pc = 0x384AFCu;
            goto label_384afc;
        }
    }
    ctx->pc = 0x384A88u;
    // 0x384a88: 0xc0f2678  jal         func_3C99E0
    ctx->pc = 0x384A88u;
    SET_GPR_U32(ctx, 31, 0x384A90u);
    ctx->pc = 0x3C99E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99E0u, 0x384A88u, 0x384A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384A90u;
label_384a90:
    // 0x384a90: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x384a90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x384a94: 0x2472dfdc  addiu       $s2, $v1, -0x2024
    ctx->pc = 0x384a94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959068));
    // 0x384a98: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x384a98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
    // 0x384a9c: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x384a9cu;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x3FDFDCu));
    // 0x384aa0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x384aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x384aa4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x384aa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384aa8: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x384aa8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x384aac: 0xacf0000c  sw          $s0, 0xC($a3)
    ctx->pc = 0x384aacu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 16));
    // 0x384ab0: 0x24846080  addiu       $a0, $a0, 0x6080
    ctx->pc = 0x384ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24704));
    // 0x384ab4: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x384ab4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384ab8: 0x240a0020  addiu       $t2, $zero, 0x20
    ctx->pc = 0x384ab8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x384abc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x384abcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384ac0: 0xc0f347c  jal         func_3CD1F0
    ctx->pc = 0x384AC0u;
    SET_GPR_U32(ctx, 31, 0x384AC8u);
    ctx->pc = 0x384AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384AC0u;
    // 0x384ac4: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CD1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CD1F0u, 0x384AC0u, 0x384AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384AC8u;
label_384ac8:
    // 0x384ac8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x384AC8u;
    {
        const bool branch_taken_0x384ac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x384ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384AC8u;
        // 0x384acc: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384ac8) {
            ctx->pc = 0x384AE8u;
            goto label_384ae8;
        }
    }
    ctx->pc = 0x384AD0u;
    // 0x384ad0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x384ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x384ad4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x384ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x384ad8: 0xc0f2670  jal         func_3C99C0
    ctx->pc = 0x384AD8u;
    SET_GPR_U32(ctx, 31, 0x384AE0u);
    ctx->pc = 0x384ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384AD8u;
    // 0x384adc: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99C0u, 0x384AD8u, 0x384AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384AE0u;
label_384ae0:
    // 0x384ae0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x384AE0u;
    {
        const bool branch_taken_0x384ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x384AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384AE0u;
        // 0x384ae4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384ae0) {
            ctx->pc = 0x384AFCu;
            goto label_384afc;
        }
    }
    ctx->pc = 0x384AE8u;
label_384ae8:
    // 0x384ae8: 0xc0efe28  jal         func_3BF8A0
    ctx->pc = 0x384AE8u;
    SET_GPR_U32(ctx, 31, 0x384AF0u);
    ctx->pc = 0x384AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384AE8u;
    // 0x384aec: 0x24848ba0  addiu       $a0, $a0, -0x7460 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF8A0u, 0x384AE8u, 0x384AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384AF0u;
label_384af0:
    // 0x384af0: 0xc0f2670  jal         func_3C99C0
    ctx->pc = 0x384AF0u;
    SET_GPR_U32(ctx, 31, 0x384AF8u);
    ctx->pc = 0x384AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384AF0u;
    // 0x384af4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99C0u, 0x384AF0u, 0x384AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384AF8u;
label_384af8:
    // 0x384af8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x384af8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_384afc:
    // 0x384afc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x384afcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x384b00: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x384b00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x384b04: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x384b04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x384b08: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x384b08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x384b0c: 0x3e00008  jr          $ra
    ctx->pc = 0x384B0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x384B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384B0Cu;
        // 0x384b10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384B0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x384B14u;
    // 0x384b14: 0x0  nop
    ctx->pc = 0x384b14u;
    // NOP
    // 0x384b18: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x384b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x384b1c: 0x0  nop
    ctx->pc = 0x384b1cu;
    // NOP
    // 0x384b20: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x384b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x384b24: 0x0  nop
    ctx->pc = 0x384b24u;
    // NOP
    ctx->pc = 0x384b28u;
}
