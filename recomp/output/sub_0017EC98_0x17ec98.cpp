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

// Function: sub_0017EC98
// Address: 0x17ec98 - 0x17ed20
void sub_0017EC98_0x17ec98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017EC98_0x17ec98");
#endif

    switch (ctx->pc) {
        case 0x17ecd8u: goto label_17ecd8;
        default: break;
    }

    ctx->pc = 0x17ec98u;

    // 0x17ec98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17ec98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17ec9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17ec9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17eca0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17eca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17eca4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17eca4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eca8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17eca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17ecac: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x17ecacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x17ecb0: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x17ECB0u;
    {
        const bool branch_taken_0x17ecb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17ECB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ECB0u;
        // 0x17ecb4: 0x3c030049  lui         $v1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ecb0) {
            ctx->pc = 0x17ED08u;
            goto label_17ed08;
        }
    }
    ctx->pc = 0x17ECB8u;
    // 0x17ecb8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17ecb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17ecbc: 0x24719a08  addiu       $s1, $v1, -0x65F8
    ctx->pc = 0x17ecbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x17ecc0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x17ecc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x17ecc4: 0x8c44020c  lw          $a0, 0x20C($v0)
    ctx->pc = 0x17ecc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x17ecc8: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x17ECC8u;
    {
        const bool branch_taken_0x17ecc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17ECCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ECC8u;
        // 0x17eccc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ecc8) {
            ctx->pc = 0x17ED0Cu;
            goto label_17ed0c;
        }
    }
    ctx->pc = 0x17ECD0u;
    // 0x17ecd0: 0xc043996  jal         func_10E658
    ctx->pc = 0x17ECD0u;
    SET_GPR_U32(ctx, 31, 0x17ECD8u);
    ctx->pc = 0x10E658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E658u, 0x17ECD0u, 0x17ECD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17ECD8u;
label_17ecd8:
    // 0x17ecd8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x17ECD8u;
    {
        const bool branch_taken_0x17ecd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17ECDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ECD8u;
        // 0x17ecdc: 0x3c050080  lui         $a1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)128 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ecd8) {
            ctx->pc = 0x17ED08u;
            goto label_17ed08;
        }
    }
    ctx->pc = 0x17ECE0u;
    // 0x17ece0: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x17ece0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x17ece4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17ece4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17ece8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x17ece8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x17ecec: 0x8c430108  lw          $v1, 0x108($v0)
    ctx->pc = 0x17ececu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x17ecf0: 0x8c640ff8  lw          $a0, 0xFF8($v1)
    ctx->pc = 0x17ecf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4088)));
    // 0x17ecf4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x17ecf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17ecf8: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x17ecf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x17ecfc: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x17ecfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x17ed00: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17ED00u;
    {
        const bool branch_taken_0x17ed00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17ED04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ED00u;
        // 0x17ed04: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ed00) {
            ctx->pc = 0x17ED0Cu;
            goto label_17ed0c;
        }
    }
    ctx->pc = 0x17ED08u;
label_17ed08:
    // 0x17ed08: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17ed08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17ed0c:
    // 0x17ed0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17ed0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ed10: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17ed10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17ed14: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17ed14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ed18: 0x3e00008  jr          $ra
    ctx->pc = 0x17ED18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17ED1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17ED18u;
        // 0x17ed1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17ED18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17ED20u;
}
