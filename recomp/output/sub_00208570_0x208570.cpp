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

// Function: sub_00208570
// Address: 0x208570 - 0x2085e8
void sub_00208570_0x208570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208570_0x208570");
#endif

    switch (ctx->pc) {
        case 0x2085a4u: goto label_2085a4;
        case 0x2085b8u: goto label_2085b8;
        default: break;
    }

    ctx->pc = 0x208570u;

    // 0x208570: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x208570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x208574: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x208574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x208578: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x208578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x20857c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x20857cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x208580: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x208580u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208584: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x208584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x208588: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x208588u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20858c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20858cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x208590: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x208590u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208594: 0x1222000b  beq         $s1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x208594u;
    {
        const bool branch_taken_0x208594 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x208598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208594u;
        // 0x208598: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208594) {
            ctx->pc = 0x2085C4u;
            goto label_2085c4;
        }
    }
    ctx->pc = 0x20859Cu;
    // 0x20859c: 0xc0821c2  jal         func_208708
    ctx->pc = 0x20859Cu;
    SET_GPR_U32(ctx, 31, 0x2085A4u);
    ctx->pc = 0x208708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208708u, 0x20859Cu, 0x2085A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2085A4u;
label_2085a4:
    // 0x2085a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2085a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2085a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2085a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2085ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2085acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2085b0: 0xc0821c2  jal         func_208708
    ctx->pc = 0x2085B0u;
    SET_GPR_U32(ctx, 31, 0x2085B8u);
    ctx->pc = 0x2085B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2085B0u;
    // 0x2085b4: 0x26660001  addiu       $a2, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208708u, 0x2085B0u, 0x2085B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2085B8u;
label_2085b8:
    // 0x2085b8: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x2085b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2085bc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2085BCu;
    {
        const bool branch_taken_0x2085bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2085C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2085BCu;
        // 0x2085c0: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2085bc) {
            ctx->pc = 0x2085C8u;
            goto label_2085c8;
        }
    }
    ctx->pc = 0x2085C4u;
label_2085c4:
    // 0x2085c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2085c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2085c8:
    // 0x2085c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2085c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2085cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2085ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2085d0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2085d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2085d4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2085d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2085d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2085d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2085dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2085DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2085E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2085DCu;
        // 0x2085e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2085DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2085E4u;
    // 0x2085e4: 0x0  nop
    ctx->pc = 0x2085e4u;
    // NOP
    ctx->pc = 0x2085e8u;
}
