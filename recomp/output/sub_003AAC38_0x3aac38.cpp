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

// Function: sub_003AAC38
// Address: 0x3aac38 - 0x3aac68
void sub_003AAC38_0x3aac38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AAC38_0x3aac38");
#endif

    switch (ctx->pc) {
        case 0x3aac4cu: goto label_3aac4c;
        case 0x3aac54u: goto label_3aac54;
        default: break;
    }

    ctx->pc = 0x3aac38u;

    // 0x3aac38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3aac38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3aac3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3aac3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3aac40: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3aac40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3aac44: 0xc0ea7d8  jal         func_3A9F60
    ctx->pc = 0x3AAC44u;
    SET_GPR_U32(ctx, 31, 0x3AAC4Cu);
    ctx->pc = 0x3AAC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AAC44u;
    // 0x3aac48: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9F60u, 0x3AAC44u, 0x3AAC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AAC4Cu;
label_3aac4c:
    // 0x3aac4c: 0xc0eab1a  jal         func_3AAC68
    ctx->pc = 0x3AAC4Cu;
    SET_GPR_U32(ctx, 31, 0x3AAC54u);
    ctx->pc = 0x3AAC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AAC4Cu;
    // 0x3aac50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AAC68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AAC68u, 0x3AAC4Cu, 0x3AAC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AAC54u;
label_3aac54:
    // 0x3aac54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3aac54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3aac58: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3aac58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3aac5c: 0x80ea7de  j           func_3A9F78
    ctx->pc = 0x3AAC5Cu;
    ctx->pc = 0x3AAC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AAC5Cu;
    // 0x3aac60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9F78u;
    sub_003A9F78_0x3a9f78(rdram, ctx, runtime); return;
    ctx->pc = 0x3AAC64u;
    // 0x3aac64: 0x0  nop
    ctx->pc = 0x3aac64u;
    // NOP
    ctx->pc = 0x3aac68u;
}
