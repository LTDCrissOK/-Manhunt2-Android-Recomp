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

// Function: sub_00121958
// Address: 0x121958 - 0x1219c8
void sub_00121958_0x121958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00121958_0x121958");
#endif

    switch (ctx->pc) {
        case 0x121980u: goto label_121980;
        case 0x121990u: goto label_121990;
        case 0x1219a4u: goto label_1219a4;
        default: break;
    }

    ctx->pc = 0x121958u;

    // 0x121958: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x121958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12195c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12195cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x121960: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x121960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x121964: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x121964u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121968: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x121968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12196c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x12196cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121970: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x121970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x121974: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x121974u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121978: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x121978u;
    SET_GPR_U32(ctx, 31, 0x121980u);
    ctx->pc = 0x12197Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121978u;
    // 0x12197c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x121978u, 0x121980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121980u;
label_121980:
    // 0x121980: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x121980u;
    {
        const bool branch_taken_0x121980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121980u;
        // 0x121984: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121980) {
            ctx->pc = 0x1219B0u;
            goto label_1219b0;
        }
    }
    ctx->pc = 0x121988u;
    // 0x121988: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x121988u;
    SET_GPR_U32(ctx, 31, 0x121990u);
    ctx->pc = 0x12198Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121988u;
    // 0x12198c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x121988u, 0x121990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121990u;
label_121990:
    // 0x121990: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x121990u;
    {
        const bool branch_taken_0x121990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x121994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121990u;
        // 0x121994: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121990) {
            ctx->pc = 0x1219ACu;
            goto label_1219ac;
        }
    }
    ctx->pc = 0x121998u;
    // 0x121998: 0x8e440078  lw          $a0, 0x78($s2)
    ctx->pc = 0x121998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x12199c: 0xc0427d0  jal         func_109F40
    ctx->pc = 0x12199Cu;
    SET_GPR_U32(ctx, 31, 0x1219A4u);
    ctx->pc = 0x1219A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12199Cu;
    // 0x1219a0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109F40u, 0x12199Cu, 0x1219A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1219A4u;
label_1219a4:
    // 0x1219a4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1219A4u;
    {
        const bool branch_taken_0x1219a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1219A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1219A4u;
        // 0x1219a8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1219a4) {
            ctx->pc = 0x1219B4u;
            goto label_1219b4;
        }
    }
    ctx->pc = 0x1219ACu;
label_1219ac:
    // 0x1219ac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1219acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1219b0:
    // 0x1219b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1219b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1219b4:
    // 0x1219b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1219b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1219b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1219b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1219bc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1219bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1219c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1219C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1219C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1219C0u;
        // 0x1219c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1219C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1219C8u;
}
