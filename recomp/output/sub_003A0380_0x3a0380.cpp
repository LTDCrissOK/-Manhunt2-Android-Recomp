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

// Function: sub_003A0380
// Address: 0x3a0380 - 0x3a03e0
void sub_003A0380_0x3a0380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A0380_0x3a0380");
#endif

    switch (ctx->pc) {
        case 0x3a03a4u: goto label_3a03a4;
        case 0x3a03acu: goto label_3a03ac;
        case 0x3a03bcu: goto label_3a03bc;
        case 0x3a03c4u: goto label_3a03c4;
        default: break;
    }

    ctx->pc = 0x3a0380u;

    // 0x3a0380: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a0380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a0384: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a0384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a0388: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a0388u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a038c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3a038cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3a0390: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3a0390u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0394: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3a0394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3a0398: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3a0398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3a039c: 0xc0ecbf0  jal         func_3B2FC0
    ctx->pc = 0x3A039Cu;
    SET_GPR_U32(ctx, 31, 0x3A03A4u);
    ctx->pc = 0x3A03A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A039Cu;
    // 0x3a03a0: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2FC0u, 0x3A039Cu, 0x3A03A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A03A4u;
label_3a03a4:
    // 0x3a03a4: 0xc0ecbe4  jal         func_3B2F90
    ctx->pc = 0x3A03A4u;
    SET_GPR_U32(ctx, 31, 0x3A03ACu);
    ctx->pc = 0x3B2F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2F90u, 0x3A03A4u, 0x3A03ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A03ACu;
label_3a03ac:
    // 0x3a03ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a03acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a03b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3a03b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a03b4: 0xc0e80f8  jal         func_3A03E0
    ctx->pc = 0x3A03B4u;
    SET_GPR_U32(ctx, 31, 0x3A03BCu);
    ctx->pc = 0x3A03B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A03B4u;
    // 0x3a03b8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A03E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A03E0u, 0x3A03B4u, 0x3A03BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A03BCu;
label_3a03bc:
    // 0x3a03bc: 0xc0ecbea  jal         func_3B2FA8
    ctx->pc = 0x3A03BCu;
    SET_GPR_U32(ctx, 31, 0x3A03C4u);
    ctx->pc = 0x3B2FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2FA8u, 0x3A03BCu, 0x3A03C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A03C4u;
label_3a03c4:
    // 0x3a03c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a03c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a03c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a03c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a03cc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3a03ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a03d0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3a03d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3a03d4: 0x80ecbf2  j           func_3B2FC8
    ctx->pc = 0x3A03D4u;
    ctx->pc = 0x3A03D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A03D4u;
    // 0x3a03d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2FC8u;
    sub_003B2FC8_0x3b2fc8(rdram, ctx, runtime); return;
    ctx->pc = 0x3A03DCu;
    // 0x3a03dc: 0x0  nop
    ctx->pc = 0x3a03dcu;
    // NOP
    ctx->pc = 0x3a03e0u;
}
