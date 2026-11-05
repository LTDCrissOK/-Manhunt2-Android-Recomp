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

// Function: sub_0039F948
// Address: 0x39f948 - 0x39f998
void sub_0039F948_0x39f948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039F948_0x39f948");
#endif

    switch (ctx->pc) {
        case 0x39f964u: goto label_39f964;
        case 0x39f96cu: goto label_39f96c;
        case 0x39f978u: goto label_39f978;
        case 0x39f980u: goto label_39f980;
        default: break;
    }

    ctx->pc = 0x39f948u;

    // 0x39f948: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39f948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39f94c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39f94cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39f950: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39f950u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f954: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x39f954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x39f958: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x39f958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x39f95c: 0xc0ecbf0  jal         func_3B2FC0
    ctx->pc = 0x39F95Cu;
    SET_GPR_U32(ctx, 31, 0x39F964u);
    ctx->pc = 0x39F960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F95Cu;
    // 0x39f960: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2FC0u, 0x39F95Cu, 0x39F964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F964u;
label_39f964:
    // 0x39f964: 0xc0ecbe4  jal         func_3B2F90
    ctx->pc = 0x39F964u;
    SET_GPR_U32(ctx, 31, 0x39F96Cu);
    ctx->pc = 0x3B2F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2F90u, 0x39F964u, 0x39F96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F96Cu;
label_39f96c:
    // 0x39f96c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39f96cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39f970: 0xc0e7e66  jal         func_39F998
    ctx->pc = 0x39F970u;
    SET_GPR_U32(ctx, 31, 0x39F978u);
    ctx->pc = 0x39F974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F970u;
    // 0x39f974: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39F998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39F998u, 0x39F970u, 0x39F978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F978u;
label_39f978:
    // 0x39f978: 0xc0ecbea  jal         func_3B2FA8
    ctx->pc = 0x39F978u;
    SET_GPR_U32(ctx, 31, 0x39F980u);
    ctx->pc = 0x3B2FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2FA8u, 0x39F978u, 0x39F980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39F980u;
label_39f980:
    // 0x39f980: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39f980u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39f984: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x39f984u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39f988: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39f988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39f98c: 0x80ecbf2  j           func_3B2FC8
    ctx->pc = 0x39F98Cu;
    ctx->pc = 0x39F990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39F98Cu;
    // 0x39f990: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2FC8u;
    sub_003B2FC8_0x3b2fc8(rdram, ctx, runtime); return;
    ctx->pc = 0x39F994u;
    // 0x39f994: 0x0  nop
    ctx->pc = 0x39f994u;
    // NOP
    ctx->pc = 0x39f998u;
}
