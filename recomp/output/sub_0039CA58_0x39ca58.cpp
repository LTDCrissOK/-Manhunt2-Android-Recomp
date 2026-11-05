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

// Function: sub_0039CA58
// Address: 0x39ca58 - 0x39caa8
void sub_0039CA58_0x39ca58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039CA58_0x39ca58");
#endif

    switch (ctx->pc) {
        case 0x39ca7cu: goto label_39ca7c;
        case 0x39ca8cu: goto label_39ca8c;
        default: break;
    }

    ctx->pc = 0x39ca58u;

    // 0x39ca58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39ca58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39ca5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39ca5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39ca60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39ca60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ca64: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x39ca64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x39ca68: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x39ca68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ca6c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x39ca6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x39ca70: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x39ca70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x39ca74: 0xc0ebe5c  jal         func_3AF970
    ctx->pc = 0x39CA74u;
    SET_GPR_U32(ctx, 31, 0x39CA7Cu);
    ctx->pc = 0x39CA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CA74u;
    // 0x39ca78: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF970u, 0x39CA74u, 0x39CA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CA7Cu;
label_39ca7c:
    // 0x39ca7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x39ca7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ca80: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x39ca80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39ca84: 0xc0e72aa  jal         func_39CAA8
    ctx->pc = 0x39CA84u;
    SET_GPR_U32(ctx, 31, 0x39CA8Cu);
    ctx->pc = 0x39CA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CA84u;
    // 0x39ca88: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39CAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39CAA8u, 0x39CA84u, 0x39CA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39CA8Cu;
label_39ca8c:
    // 0x39ca8c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39ca8cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39ca90: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x39ca90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39ca94: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x39ca94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39ca98: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x39ca98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x39ca9c: 0x80ebe5e  j           func_3AF978
    ctx->pc = 0x39CA9Cu;
    ctx->pc = 0x39CAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39CA9Cu;
    // 0x39caa0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF978u;
    sub_003AF978_0x3af978(rdram, ctx, runtime); return;
    ctx->pc = 0x39CAA4u;
    // 0x39caa4: 0x0  nop
    ctx->pc = 0x39caa4u;
    // NOP
    ctx->pc = 0x39caa8u;
}
