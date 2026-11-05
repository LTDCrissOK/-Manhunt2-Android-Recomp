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

// Function: sub_00325AA8
// Address: 0x325aa8 - 0x325b60
void sub_00325AA8_0x325aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00325AA8_0x325aa8");
#endif

    switch (ctx->pc) {
        case 0x325accu: goto label_325acc;
        case 0x325aecu: goto label_325aec;
        case 0x325b0cu: goto label_325b0c;
        case 0x325b2cu: goto label_325b2c;
        case 0x325b4cu: goto label_325b4c;
        default: break;
    }

    ctx->pc = 0x325aa8u;

    // 0x325aa8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x325aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x325aac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x325aacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x325ab0: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x325ab0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x325ab4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x325ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x325ab8: 0x8e04be4c  lw          $a0, -0x41B4($s0)
    ctx->pc = 0x325ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3FBE4Cu));
    // 0x325abc: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x325ABCu;
    {
        const bool branch_taken_0x325abc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x325abc) {
            ctx->pc = 0x325AC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x325ABCu;
            // 0x325ac0: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x325AD4u;
            goto label_325ad4;
        }
    }
    ctx->pc = 0x325AC4u;
    // 0x325ac4: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x325AC4u;
    SET_GPR_U32(ctx, 31, 0x325ACCu);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x325AC4u, 0x325ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325ACCu;
label_325acc:
    // 0x325acc: 0xae00be4c  sw          $zero, -0x41B4($s0)
    ctx->pc = 0x325accu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294950476), GPR_U32(ctx, 0));
    // 0x325ad0: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x325ad0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
label_325ad4:
    // 0x325ad4: 0x8e05be50  lw          $a1, -0x41B0($s0)
    ctx->pc = 0x325ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950480)));
    // 0x325ad8: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x325AD8u;
    {
        const bool branch_taken_0x325ad8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x325ad8) {
            ctx->pc = 0x325ADCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x325AD8u;
            // 0x325adc: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x325AF4u;
            goto label_325af4;
        }
    }
    ctx->pc = 0x325AE0u;
    // 0x325ae0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x325ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x325ae4: 0xc0b2b08  jal         func_2CAC20
    ctx->pc = 0x325AE4u;
    SET_GPR_U32(ctx, 31, 0x325AECu);
    ctx->pc = 0x325AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325AE4u;
    // 0x325ae8: 0x24845ad0  addiu       $a0, $a0, 0x5AD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAC20u, 0x325AE4u, 0x325AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325AECu;
label_325aec:
    // 0x325aec: 0xae00be50  sw          $zero, -0x41B0($s0)
    ctx->pc = 0x325aecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294950480), GPR_U32(ctx, 0));
    // 0x325af0: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x325af0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
label_325af4:
    // 0x325af4: 0x8e05be54  lw          $a1, -0x41AC($s0)
    ctx->pc = 0x325af4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950484)));
    // 0x325af8: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x325AF8u;
    {
        const bool branch_taken_0x325af8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x325af8) {
            ctx->pc = 0x325AFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x325AF8u;
            // 0x325afc: 0x3c100040  lui         $s0, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x325B14u;
            goto label_325b14;
        }
    }
    ctx->pc = 0x325B00u;
    // 0x325b00: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x325b00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x325b04: 0xc0b2b08  jal         func_2CAC20
    ctx->pc = 0x325B04u;
    SET_GPR_U32(ctx, 31, 0x325B0Cu);
    ctx->pc = 0x325B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325B04u;
    // 0x325b08: 0x24845ad0  addiu       $a0, $a0, 0x5AD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAC20u, 0x325B04u, 0x325B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325B0Cu;
label_325b0c:
    // 0x325b0c: 0xae00be54  sw          $zero, -0x41AC($s0)
    ctx->pc = 0x325b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294950484), GPR_U32(ctx, 0));
    // 0x325b10: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x325b10u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
label_325b14:
    // 0x325b14: 0x8e05be34  lw          $a1, -0x41CC($s0)
    ctx->pc = 0x325b14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294950452)));
    // 0x325b18: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x325B18u;
    {
        const bool branch_taken_0x325b18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x325b18) {
            ctx->pc = 0x325B1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x325B18u;
            // 0x325b1c: 0x3c100048  lui         $s0, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x325B34u;
            goto label_325b34;
        }
    }
    ctx->pc = 0x325B20u;
    // 0x325b20: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x325b20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x325b24: 0xc0b2b08  jal         func_2CAC20
    ctx->pc = 0x325B24u;
    SET_GPR_U32(ctx, 31, 0x325B2Cu);
    ctx->pc = 0x325B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325B24u;
    // 0x325b28: 0x24845ad0  addiu       $a0, $a0, 0x5AD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAC20u, 0x325B24u, 0x325B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325B2Cu;
label_325b2c:
    // 0x325b2c: 0xae00be34  sw          $zero, -0x41CC($s0)
    ctx->pc = 0x325b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294950452), GPR_U32(ctx, 0));
    // 0x325b30: 0x3c100048  lui         $s0, 0x48
    ctx->pc = 0x325b30u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)72 << 16));
label_325b34:
    // 0x325b34: 0x8e052c64  lw          $a1, 0x2C64($s0)
    ctx->pc = 0x325b34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11364)));
    // 0x325b38: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x325B38u;
    {
        const bool branch_taken_0x325b38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x325b38) {
            ctx->pc = 0x325B3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x325B38u;
            // 0x325b3c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x325B54u;
            goto label_325b54;
        }
    }
    ctx->pc = 0x325B40u;
    // 0x325b40: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x325b40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x325b44: 0xc0b2b08  jal         func_2CAC20
    ctx->pc = 0x325B44u;
    SET_GPR_U32(ctx, 31, 0x325B4Cu);
    ctx->pc = 0x325B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x325B44u;
    // 0x325b48: 0x24845ad0  addiu       $a0, $a0, 0x5AD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAC20u, 0x325B44u, 0x325B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x325B4Cu;
label_325b4c:
    // 0x325b4c: 0xae002c64  sw          $zero, 0x2C64($s0)
    ctx->pc = 0x325b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11364), GPR_U32(ctx, 0));
    // 0x325b50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x325b50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_325b54:
    // 0x325b54: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x325b54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x325b58: 0x3e00008  jr          $ra
    ctx->pc = 0x325B58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x325B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325B58u;
        // 0x325b5c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325B58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x325B60u;
}
