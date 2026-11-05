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

// Function: sub_0014F708
// Address: 0x14f708 - 0x14f780
void sub_0014F708_0x14f708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014F708_0x14f708");
#endif

    switch (ctx->pc) {
        case 0x14f73cu: goto label_14f73c;
        case 0x14f748u: goto label_14f748;
        case 0x14f75cu: goto label_14f75c;
        case 0x14f76cu: goto label_14f76c;
        default: break;
    }

    ctx->pc = 0x14f708u;

    // 0x14f708: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x14f708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x14f70c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x14f70cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x14f710: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x14f710u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x14f714: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14f714u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14f718: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x14f718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x14f71c: 0x24840514  addiu       $a0, $a0, 0x514
    ctx->pc = 0x14f71cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1300));
    // 0x14f720: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x14f720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x14f724: 0x858021  addu        $s0, $a0, $a1
    ctx->pc = 0x14f724u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x14f728: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x14f728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14f72c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x14F72Cu;
    {
        const bool branch_taken_0x14f72c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F72Cu;
        // 0x14f730: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f72c) {
            ctx->pc = 0x14F770u;
            goto label_14f770;
        }
    }
    ctx->pc = 0x14F734u;
    // 0x14f734: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x14F734u;
    SET_GPR_U32(ctx, 31, 0x14F73Cu);
    ctx->pc = 0x14F738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F734u;
    // 0x14f738: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x14F734u, 0x14F73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F73Cu;
label_14f73c:
    // 0x14f73c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x14f73cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14f740: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x14F740u;
    SET_GPR_U32(ctx, 31, 0x14F748u);
    ctx->pc = 0x14F744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F740u;
    // 0x14f744: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x14F740u, 0x14F748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F748u;
label_14f748:
    // 0x14f748: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14F748u;
    {
        const bool branch_taken_0x14f748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F748u;
        // 0x14f74c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f748) {
            ctx->pc = 0x14F764u;
            goto label_14f764;
        }
    }
    ctx->pc = 0x14F750u;
    // 0x14f750: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x14f750u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x14f754: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x14F754u;
    SET_GPR_U32(ctx, 31, 0x14F75Cu);
    ctx->pc = 0x14F758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F754u;
    // 0x14f758: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x14F754u, 0x14F75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F75Cu;
label_14f75c:
    // 0x14f75c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14F75Cu;
    {
        const bool branch_taken_0x14f75c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F75Cu;
        // 0x14f760: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f75c) {
            ctx->pc = 0x14F770u;
            goto label_14f770;
        }
    }
    ctx->pc = 0x14F764u;
label_14f764:
    // 0x14f764: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x14F764u;
    SET_GPR_U32(ctx, 31, 0x14F76Cu);
    ctx->pc = 0x14F768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14F764u;
    // 0x14f768: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x14F764u, 0x14F76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14F76Cu;
label_14f76c:
    // 0x14f76c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14f76cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14f770:
    // 0x14f770: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x14f770u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14f774: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x14f774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14f778: 0x3e00008  jr          $ra
    ctx->pc = 0x14F778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14F77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F778u;
        // 0x14f77c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14F778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14F780u;
}
