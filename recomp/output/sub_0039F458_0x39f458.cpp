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

// Function: sub_0039F458
// Address: 0x39f458 - 0x39f4a8
void sub_0039F458_0x39f458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039F458_0x39f458");
#endif

    switch (ctx->pc) {
        case 0x39f47cu: goto label_39f47c;
        case 0x39f48cu: goto label_39f48c;
        default: break;
    }

    ctx->pc = 0x39f458u;

    // 0x39f458: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39f458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39f45c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39f45cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39f460: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39f460u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f464: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x39f464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x39f468: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x39f468u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f46c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x39f46cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x39f470: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x39f470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x39f474: 0xc0ecbf0  jal         func_3B2FC0
    ctx->pc = 0x39F474u;
    SET_GPR_U32(ctx, 31, 0x39F47Cu);
    ctx->pc = 0x39F478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F474u;
    // 0x39f478: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2FC0u, 0x39F474u, 0x39F47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F47Cu;
label_39f47c:
    // 0x39f47c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39f47cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f480: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x39f480u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f484: 0xc0e7d2a  jal         func_39F4A8
    ctx->pc = 0x39F484u;
    SET_GPR_U32(ctx, 31, 0x39F48Cu);
    ctx->pc = 0x39F488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F484u;
    // 0x39f488: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39F4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39F4A8u, 0x39F484u, 0x39F48Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F48Cu;
label_39f48c:
    // 0x39f48c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39f48cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39f490: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x39f490u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39f494: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x39f494u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39f498: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x39f498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x39f49c: 0x80ecbf2  j           func_3B2FC8
    ctx->pc = 0x39F49Cu;
    ctx->pc = 0x39F4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F49Cu;
    // 0x39f4a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2FC8u;
    sub_003B2FC8_0x3b2fc8(rdram, ctx, runtime); return;
    ctx->pc = 0x39F4A4u;
    // 0x39f4a4: 0x0  nop
    ctx->pc = 0x39f4a4u;
    // NOP
    ctx->pc = 0x39f4a8u;
}
