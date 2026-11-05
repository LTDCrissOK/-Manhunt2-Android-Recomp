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

// Function: sub_002BAE58
// Address: 0x2bae58 - 0x2baed0
void sub_002BAE58_0x2bae58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BAE58_0x2bae58");
#endif

    switch (ctx->pc) {
        case 0x2bae80u: goto label_2bae80;
        case 0x2baea0u: goto label_2baea0;
        case 0x2baeb0u: goto label_2baeb0;
        default: break;
    }

    ctx->pc = 0x2bae58u;

    // 0x2bae58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bae58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bae5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2bae5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2bae60: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2bae60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2bae64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2bae64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bae68: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2bae68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2bae6c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2bae6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bae70: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2bae70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bae74: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2bae74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2bae78: 0xc0aebee  jal         func_2BAFB8
    ctx->pc = 0x2BAE78u;
    SET_GPR_U32(ctx, 31, 0x2BAE80u);
    ctx->pc = 0x2BAE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAE78u;
    // 0x2bae7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAFB8u, 0x2BAE78u, 0x2BAE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAE80u;
label_2bae80:
    // 0x2bae80: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2bae80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bae84: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BAE84u;
    {
        const bool branch_taken_0x2bae84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAE84u;
        // 0x2bae88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bae84) {
            ctx->pc = 0x2BAE98u;
            goto label_2bae98;
        }
    }
    ctx->pc = 0x2BAE8Cu;
    // 0x2bae8c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x2bae8cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2bae90: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2BAE90u;
    {
        const bool branch_taken_0x2bae90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bae90) {
            ctx->pc = 0x2BAEA8u;
            goto label_2baea8;
        }
    }
    ctx->pc = 0x2BAE98u;
label_2bae98:
    // 0x2bae98: 0xc0aebb4  jal         func_2BAED0
    ctx->pc = 0x2BAE98u;
    SET_GPR_U32(ctx, 31, 0x2BAEA0u);
    ctx->pc = 0x2BAE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAE98u;
    // 0x2bae9c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAED0u, 0x2BAE98u, 0x2BAEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAEA0u;
label_2baea0:
    // 0x2baea0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2BAEA0u;
    {
        const bool branch_taken_0x2baea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAEA0u;
        // 0x2baea4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baea0) {
            ctx->pc = 0x2BAEB4u;
            goto label_2baeb4;
        }
    }
    ctx->pc = 0x2BAEA8u;
label_2baea8:
    // 0x2baea8: 0xc0aec00  jal         func_2BB000
    ctx->pc = 0x2BAEA8u;
    SET_GPR_U32(ctx, 31, 0x2BAEB0u);
    ctx->pc = 0x2BAEACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAEA8u;
    // 0x2baeac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB000u, 0x2BAEA8u, 0x2BAEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAEB0u;
label_2baeb0:
    // 0x2baeb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2baeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2baeb4:
    // 0x2baeb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2baeb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2baeb8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2baeb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2baebc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2baebcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2baec0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2baec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2baec4: 0x3e00008  jr          $ra
    ctx->pc = 0x2BAEC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BAEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAEC4u;
        // 0x2baec8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BAEC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BAECCu;
    // 0x2baecc: 0x0  nop
    ctx->pc = 0x2baeccu;
    // NOP
    ctx->pc = 0x2baed0u;
}
