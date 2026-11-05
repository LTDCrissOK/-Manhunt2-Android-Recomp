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

// Function: sub_00166C68
// Address: 0x166c68 - 0x166cf0
void sub_00166C68_0x166c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00166C68_0x166c68");
#endif

    switch (ctx->pc) {
        case 0x166ca4u: goto label_166ca4;
        default: break;
    }

    ctx->pc = 0x166c68u;

    // 0x166c68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x166c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x166c6c: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x166c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x166c70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x166c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x166c74: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x166c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x166c78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x166c78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166c7c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x166c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x166c80: 0x24719a08  addiu       $s1, $v1, -0x65F8
    ctx->pc = 0x166c80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x166c84: 0x8e0202e0  lw          $v0, 0x2E0($s0)
    ctx->pc = 0x166c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 736)));
    // 0x166c88: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x166c88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x166c8c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x166c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x166c90: 0x8c44020c  lw          $a0, 0x20C($v0)
    ctx->pc = 0x166c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x166c94: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x166C94u;
    {
        const bool branch_taken_0x166c94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x166C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166C94u;
        // 0x166c98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166c94) {
            ctx->pc = 0x166CD8u;
            goto label_166cd8;
        }
    }
    ctx->pc = 0x166C9Cu;
    // 0x166c9c: 0xc043996  jal         func_10E658
    ctx->pc = 0x166C9Cu;
    SET_GPR_U32(ctx, 31, 0x166CA4u);
    ctx->pc = 0x10E658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E658u, 0x166C9Cu, 0x166CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x166CA4u;
label_166ca4:
    // 0x166ca4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x166CA4u;
    {
        const bool branch_taken_0x166ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x166CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166CA4u;
        // 0x166ca8: 0x3c050080  lui         $a1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166ca4) {
            ctx->pc = 0x166CD4u;
            goto label_166cd4;
        }
    }
    ctx->pc = 0x166CACu;
    // 0x166cac: 0x8e0202e0  lw          $v0, 0x2E0($s0)
    ctx->pc = 0x166cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 736)));
    // 0x166cb0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x166cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x166cb4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x166cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x166cb8: 0x8c430108  lw          $v1, 0x108($v0)
    ctx->pc = 0x166cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x166cbc: 0x8c640ff8  lw          $a0, 0xFF8($v1)
    ctx->pc = 0x166cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4088)));
    // 0x166cc0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x166cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x166cc4: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x166cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x166cc8: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x166cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x166ccc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x166CCCu;
    {
        const bool branch_taken_0x166ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166CCCu;
        // 0x166cd0: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x166ccc) {
            ctx->pc = 0x166CD8u;
            goto label_166cd8;
        }
    }
    ctx->pc = 0x166CD4u;
label_166cd4:
    // 0x166cd4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x166cd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_166cd8:
    // 0x166cd8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x166cd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x166cdc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x166cdcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x166ce0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x166ce0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x166ce4: 0x3e00008  jr          $ra
    ctx->pc = 0x166CE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166CE4u;
        // 0x166ce8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166CE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x166CECu;
    // 0x166cec: 0x0  nop
    ctx->pc = 0x166cecu;
    // NOP
    ctx->pc = 0x166cf0u;
}
