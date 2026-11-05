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

// Function: sub_00380938
// Address: 0x380938 - 0x3809a0
void sub_00380938_0x380938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00380938_0x380938");
#endif

    switch (ctx->pc) {
        case 0x380958u: goto label_380958;
        case 0x380964u: goto label_380964;
        case 0x380970u: goto label_380970;
        case 0x38097cu: goto label_38097c;
        case 0x380988u: goto label_380988;
        default: break;
    }

    ctx->pc = 0x380938u;

    // 0x380938: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x380938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38093c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38093cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x380940: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x380940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x380944: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x380944u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380948: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x380948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x38094c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x38094cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380950: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x380950u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380954: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x380954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_380958:
    // 0x380958: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x380958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38095c: 0xc0e026c  jal         func_3809B0
    ctx->pc = 0x38095Cu;
    SET_GPR_U32(ctx, 31, 0x380964u);
    ctx->pc = 0x380960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38095Cu;
    // 0x380960: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3809B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3809B0u, 0x38095Cu, 0x380964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380964u;
label_380964:
    // 0x380964: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x380964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380968: 0xc0e026a  jal         func_3809A8
    ctx->pc = 0x380968u;
    SET_GPR_U32(ctx, 31, 0x380970u);
    ctx->pc = 0x38096Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380968u;
    // 0x38096c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3809A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3809A8u, 0x380968u, 0x380970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380970u;
label_380970:
    // 0x380970: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x380970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380974: 0xc0e026c  jal         func_3809B0
    ctx->pc = 0x380974u;
    SET_GPR_U32(ctx, 31, 0x38097Cu);
    ctx->pc = 0x380978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380974u;
    // 0x380978: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3809B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3809B0u, 0x380974u, 0x38097Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38097Cu;
label_38097c:
    // 0x38097c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x38097cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x380980: 0xc0e026a  jal         func_3809A8
    ctx->pc = 0x380980u;
    SET_GPR_U32(ctx, 31, 0x380988u);
    ctx->pc = 0x380984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x380980u;
    // 0x380984: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3809A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3809A8u, 0x380980u, 0x380988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x380988u;
label_380988:
    // 0x380988: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x380988u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38098c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x38098cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x380990: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x380990u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x380994: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x380994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x380998: 0x3e00008  jr          $ra
    ctx->pc = 0x380998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38099Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380998u;
        // 0x38099c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x380998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3809A0u;
}
