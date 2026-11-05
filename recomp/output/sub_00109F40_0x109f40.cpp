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

// Function: sub_00109F40
// Address: 0x109f40 - 0x109fb0
void sub_00109F40_0x109f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00109F40_0x109f40");
#endif

    switch (ctx->pc) {
        case 0x109f5cu: goto label_109f5c;
        case 0x109f88u: goto label_109f88;
        case 0x109f94u: goto label_109f94;
        default: break;
    }

    ctx->pc = 0x109f40u;

    // 0x109f40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x109f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x109f44: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x109f44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x109f48: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x109f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x109f4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x109f4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109f50: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x109f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x109f54: 0xc043366  jal         func_10CD98
    ctx->pc = 0x109F54u;
    SET_GPR_U32(ctx, 31, 0x109F5Cu);
    ctx->pc = 0x109F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109F54u;
    // 0x109f58: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD98u, 0x109F54u, 0x109F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109F5Cu;
label_109f5c:
    // 0x109f5c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x109f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x109f60: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x109f60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x109f64: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x109f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x109f68: 0x8c50001c  lw          $s0, 0x1C($v0)
    ctx->pc = 0x109f68u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x109f6c: 0x8e0300d0  lw          $v1, 0xD0($s0)
    ctx->pc = 0x109f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x109f70: 0x54600009  bnel        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x109F70u;
    {
        const bool branch_taken_0x109f70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x109f70) {
            ctx->pc = 0x109F74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x109F70u;
            // 0x109f74: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x109F98u;
            goto label_109f98;
        }
    }
    ctx->pc = 0x109F78u;
    // 0x109f78: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x109f78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x109f7c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x109f7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109f80: 0xc04786e  jal         func_11E1B8
    ctx->pc = 0x109F80u;
    SET_GPR_U32(ctx, 31, 0x109F88u);
    ctx->pc = 0x109F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109F80u;
    // 0x109f84: 0x24849a08  addiu       $a0, $a0, -0x65F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E1B8u, 0x109F80u, 0x109F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109F88u;
label_109f88:
    // 0x109f88: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x109f88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109f8c: 0xc044108  jal         func_110420
    ctx->pc = 0x109F8Cu;
    SET_GPR_U32(ctx, 31, 0x109F94u);
    ctx->pc = 0x109F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109F8Cu;
    // 0x109f90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110420u, 0x109F8Cu, 0x109F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109F94u;
label_109f94:
    // 0x109f94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x109f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_109f98:
    // 0x109f98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x109f98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x109f9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x109f9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x109fa0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x109fa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x109fa4: 0x3e00008  jr          $ra
    ctx->pc = 0x109FA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x109FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109FA4u;
        // 0x109fa8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x109FA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x109FACu;
    // 0x109fac: 0x0  nop
    ctx->pc = 0x109facu;
    // NOP
    ctx->pc = 0x109fb0u;
}
