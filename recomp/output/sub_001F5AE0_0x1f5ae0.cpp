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

// Function: sub_001F5AE0
// Address: 0x1f5ae0 - 0x1f5ba0
void sub_001F5AE0_0x1f5ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F5AE0_0x1f5ae0");
#endif

    switch (ctx->pc) {
        case 0x1f5b08u: goto label_1f5b08;
        case 0x1f5b18u: goto label_1f5b18;
        case 0x1f5b28u: goto label_1f5b28;
        case 0x1f5b68u: goto label_1f5b68;
        case 0x1f5b74u: goto label_1f5b74;
        case 0x1f5b84u: goto label_1f5b84;
        default: break;
    }

    ctx->pc = 0x1f5ae0u;

    // 0x1f5ae0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1f5ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1f5ae4: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1f5ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1f5ae8: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x1f5ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x1f5aec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1f5aecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5af0: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x1f5af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x1f5af4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f5af4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5af8: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x1F5AF8u;
    {
        const bool branch_taken_0x1f5af8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5AF8u;
        // 0x1f5afc: 0xffbf0058  sd          $ra, 0x58($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5af8) {
            ctx->pc = 0x1F5B34u;
            goto label_1f5b34;
        }
    }
    ctx->pc = 0x1F5B00u;
    // 0x1f5b00: 0xc081d36  jal         func_2074D8
    ctx->pc = 0x1F5B00u;
    SET_GPR_U32(ctx, 31, 0x1F5B08u);
    ctx->pc = 0x2074D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2074D8u, 0x1F5B00u, 0x1F5B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5B08u;
label_1f5b08:
    // 0x1f5b08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f5b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5b0c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1f5b0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5b10: 0xc07c79a  jal         func_1F1E68
    ctx->pc = 0x1F5B10u;
    SET_GPR_U32(ctx, 31, 0x1F5B18u);
    ctx->pc = 0x1F5B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5B10u;
    // 0x1f5b14: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1E68u, 0x1F5B10u, 0x1F5B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5B18u;
label_1f5b18:
    // 0x1f5b18: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f5b18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5b1c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f5b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5b20: 0xc08219a  jal         func_208668
    ctx->pc = 0x1F5B20u;
    SET_GPR_U32(ctx, 31, 0x1F5B28u);
    ctx->pc = 0x1F5B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5B20u;
    // 0x1f5b24: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208668u, 0x1F5B20u, 0x1F5B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5B28u;
label_1f5b28:
    // 0x1f5b28: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f5b28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5b2c: 0x5ca00003  bgtzl       $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F5B2Cu;
    {
        const bool branch_taken_0x1f5b2c = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x1f5b2c) {
            ctx->pc = 0x1F5B30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F5B2Cu;
            // 0x1f5b30: 0x8e020478  lw          $v0, 0x478($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F5B3Cu;
            goto label_1f5b3c;
        }
    }
    ctx->pc = 0x1F5B34u;
label_1f5b34:
    // 0x1f5b34: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1F5B34u;
    {
        const bool branch_taken_0x1f5b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5B34u;
        // 0x1f5b38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5b34) {
            ctx->pc = 0x1F5B84u;
            goto label_1f5b84;
        }
    }
    ctx->pc = 0x1F5B3Cu;
label_1f5b3c:
    // 0x1f5b3c: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F5B3Cu;
    {
        const bool branch_taken_0x1f5b3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5b3c) {
            ctx->pc = 0x1F5B40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F5B3Cu;
            // 0x1f5b40: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F5B44u;
            goto label_1f5b44;
        }
    }
    ctx->pc = 0x1F5B44u;
label_1f5b44:
    // 0x1f5b44: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x1f5b44u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
    // 0x1f5b48: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f5b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5b4c: 0x45001b  divu        $zero, $v0, $a1
    ctx->pc = 0x1f5b4cu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1f5b50: 0x24c6ee30  addiu       $a2, $a2, -0x11D0
    ctx->pc = 0x1f5b50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962736));
    // 0x1f5b54: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1f5b54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5b58: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1f5b58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1f5b5c: 0x4010  mfhi        $t0
    ctx->pc = 0x1f5b5cu;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x1f5b60: 0xc0efed0  jal         func_3BFB40
    ctx->pc = 0x1F5B60u;
    SET_GPR_U32(ctx, 31, 0x1F5B68u);
    ctx->pc = 0x1F5B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5B60u;
    // 0x1f5b64: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFB40u, 0x1F5B60u, 0x1F5B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5B68u;
label_1f5b68:
    // 0x1f5b68: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1f5b68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5b6c: 0xc08217a  jal         func_2085E8
    ctx->pc = 0x1F5B6Cu;
    SET_GPR_U32(ctx, 31, 0x1F5B74u);
    ctx->pc = 0x1F5B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5B6Cu;
    // 0x1f5b70: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E8u, 0x1F5B6Cu, 0x1F5B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5B74u;
label_1f5b74:
    // 0x1f5b74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f5b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5b78: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f5b78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5b7c: 0xc08215c  jal         func_208570
    ctx->pc = 0x1F5B7Cu;
    SET_GPR_U32(ctx, 31, 0x1F5B84u);
    ctx->pc = 0x1F5B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F5B7Cu;
    // 0x1f5b80: 0x2406001b  addiu       $a2, $zero, 0x1B (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208570u, 0x1F5B7Cu, 0x1F5B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5B84u;
label_1f5b84:
    // 0x1f5b84: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1f5b84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f5b88: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x1f5b88u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f5b8c: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x1f5b8cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f5b90: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1f5b90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1f5b94: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5B94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5B94u;
        // 0x1f5b98: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5B94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F5B9Cu;
    // 0x1f5b9c: 0x0  nop
    ctx->pc = 0x1f5b9cu;
    // NOP
    ctx->pc = 0x1f5ba0u;
}
