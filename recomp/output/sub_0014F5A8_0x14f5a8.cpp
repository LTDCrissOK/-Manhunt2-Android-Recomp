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

// Function: sub_0014F5A8
// Address: 0x14f5a8 - 0x14f628
void sub_0014F5A8_0x14f5a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014F5A8_0x14f5a8");
#endif

    switch (ctx->pc) {
        case 0x14f5e0u: goto label_14f5e0;
        case 0x14f5ecu: goto label_14f5ec;
        case 0x14f600u: goto label_14f600;
        case 0x14f610u: goto label_14f610;
        default: break;
    }

    ctx->pc = 0x14f5a8u;

    // 0x14f5a8: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x14f5a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x14f5ac: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x14f5acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x14f5b0: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x14f5b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x14f5b4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14f5b4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14f5b8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x14f5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x14f5bc: 0x24840510  addiu       $a0, $a0, 0x510
    ctx->pc = 0x14f5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1296));
    // 0x14f5c0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x14f5c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x14f5c4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x14f5c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x14f5c8: 0x858821  addu        $s1, $a0, $a1
    ctx->pc = 0x14f5c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x14f5cc: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x14f5ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x14f5d0: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x14F5D0u;
    {
        const bool branch_taken_0x14f5d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F5D0u;
        // 0x14f5d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f5d0) {
            ctx->pc = 0x14F614u;
            goto label_14f614;
        }
    }
    ctx->pc = 0x14F5D8u;
    // 0x14f5d8: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x14F5D8u;
    SET_GPR_U32(ctx, 31, 0x14F5E0u);
    ctx->pc = 0x14F5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F5D8u;
    // 0x14f5dc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x14F5D8u, 0x14F5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F5E0u;
label_14f5e0:
    // 0x14f5e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14f5e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f5e4: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x14F5E4u;
    SET_GPR_U32(ctx, 31, 0x14F5ECu);
    ctx->pc = 0x14F5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F5E4u;
    // 0x14f5e8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x14F5E4u, 0x14F5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F5ECu;
label_14f5ec:
    // 0x14f5ec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14F5ECu;
    {
        const bool branch_taken_0x14f5ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F5ECu;
        // 0x14f5f0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f5ec) {
            ctx->pc = 0x14F608u;
            goto label_14f608;
        }
    }
    ctx->pc = 0x14F5F4u;
    // 0x14f5f4: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x14f5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x14f5f8: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x14F5F8u;
    SET_GPR_U32(ctx, 31, 0x14F600u);
    ctx->pc = 0x14F5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F5F8u;
    // 0x14f5fc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x14F5F8u, 0x14F600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F600u;
label_14f600:
    // 0x14f600: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14F600u;
    {
        const bool branch_taken_0x14f600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F600u;
        // 0x14f604: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f600) {
            ctx->pc = 0x14F614u;
            goto label_14f614;
        }
    }
    ctx->pc = 0x14F608u;
label_14f608:
    // 0x14f608: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x14F608u;
    SET_GPR_U32(ctx, 31, 0x14F610u);
    ctx->pc = 0x14F60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F608u;
    // 0x14f60c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x14F608u, 0x14F610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F610u;
label_14f610:
    // 0x14f610: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14f610u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14f614:
    // 0x14f614: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x14f614u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14f618: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x14f618u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14f61c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14f61cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14f620: 0x3e00008  jr          $ra
    ctx->pc = 0x14F620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14F624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F620u;
        // 0x14f624: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14F620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14F628u;
}
