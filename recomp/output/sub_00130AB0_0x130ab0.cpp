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

// Function: sub_00130AB0
// Address: 0x130ab0 - 0x130b50
void sub_00130AB0_0x130ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00130AB0_0x130ab0");
#endif

    switch (ctx->pc) {
        case 0x130ae4u: goto label_130ae4;
        case 0x130af0u: goto label_130af0;
        case 0x130afcu: goto label_130afc;
        case 0x130b10u: goto label_130b10;
        case 0x130b20u: goto label_130b20;
        case 0x130b30u: goto label_130b30;
        default: break;
    }

    ctx->pc = 0x130ab0u;

    // 0x130ab0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x130ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x130ab4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x130ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x130ab8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x130ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x130abc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x130abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x130ac0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x130ac0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130ac4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x130ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x130ac8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x130ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x130acc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x130accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x130ad0: 0x8c430258  lw          $v1, 0x258($v0)
    ctx->pc = 0x130ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 600)));
    // 0x130ad4: 0x14600016  bnez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x130AD4u;
    {
        const bool branch_taken_0x130ad4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x130AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130AD4u;
        // 0x130ad8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130ad4) {
            ctx->pc = 0x130B30u;
            goto label_130b30;
        }
    }
    ctx->pc = 0x130ADCu;
    // 0x130adc: 0xc046044  jal         func_118110
    ctx->pc = 0x130ADCu;
    SET_GPR_U32(ctx, 31, 0x130AE4u);
    ctx->pc = 0x130AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130ADCu;
    // 0x130ae0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118110u, 0x130ADCu, 0x130AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130AE4u;
label_130ae4:
    // 0x130ae4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x130ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130ae8: 0xc0460e4  jal         func_118390
    ctx->pc = 0x130AE8u;
    SET_GPR_U32(ctx, 31, 0x130AF0u);
    ctx->pc = 0x130AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130AE8u;
    // 0x130aec: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118390u, 0x130AE8u, 0x130AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130AF0u;
label_130af0:
    // 0x130af0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x130af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x130af4: 0xc043920  jal         func_10E480
    ctx->pc = 0x130AF4u;
    SET_GPR_U32(ctx, 31, 0x130AFCu);
    ctx->pc = 0x130AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130AF4u;
    // 0x130af8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E480u, 0x130AF4u, 0x130AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130AFCu;
label_130afc:
    // 0x130afc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x130afcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130b00: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x130B00u;
    {
        const bool branch_taken_0x130b00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x130B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130B00u;
        // 0x130b04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130b00) {
            ctx->pc = 0x130B30u;
            goto label_130b30;
        }
    }
    ctx->pc = 0x130B08u;
    // 0x130b08: 0xc04c5ca  jal         func_131728
    ctx->pc = 0x130B08u;
    SET_GPR_U32(ctx, 31, 0x130B10u);
    ctx->pc = 0x130B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130B08u;
    // 0x130b0c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131728u, 0x130B08u, 0x130B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130B10u;
label_130b10:
    // 0x130b10: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x130B10u;
    {
        const bool branch_taken_0x130b10 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x130B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130B10u;
        // 0x130b14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130b10) {
            ctx->pc = 0x130B28u;
            goto label_130b28;
        }
    }
    ctx->pc = 0x130B18u;
    // 0x130b18: 0xc0950d0  jal         func_254340
    ctx->pc = 0x130B18u;
    SET_GPR_U32(ctx, 31, 0x130B20u);
    ctx->pc = 0x130B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130B18u;
    // 0x130b1c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254340u, 0x130B18u, 0x130B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130B20u;
label_130b20:
    // 0x130b20: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x130B20u;
    {
        const bool branch_taken_0x130b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130B20u;
        // 0x130b24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130b20) {
            ctx->pc = 0x130B34u;
            goto label_130b34;
        }
    }
    ctx->pc = 0x130B28u;
label_130b28:
    // 0x130b28: 0xc0950f0  jal         func_2543C0
    ctx->pc = 0x130B28u;
    SET_GPR_U32(ctx, 31, 0x130B30u);
    ctx->pc = 0x130B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130B28u;
    // 0x130b2c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2543C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2543C0u, 0x130B28u, 0x130B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130B30u;
label_130b30:
    // 0x130b30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x130b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_130b34:
    // 0x130b34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x130b34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130b38: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x130b38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x130b3c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x130b3cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x130b40: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x130b40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x130b44: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x130b44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x130b48: 0x3e00008  jr          $ra
    ctx->pc = 0x130B48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130B48u;
        // 0x130b4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130B48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x130B50u;
}
