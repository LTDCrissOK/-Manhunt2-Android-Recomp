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

// Function: sub_00337F78
// Address: 0x337f78 - 0x338000
void sub_00337F78_0x337f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00337F78_0x337f78");
#endif

    switch (ctx->pc) {
        case 0x337f9cu: goto label_337f9c;
        case 0x337fb0u: goto label_337fb0;
        case 0x337fc0u: goto label_337fc0;
        case 0x337fe4u: goto label_337fe4;
        default: break;
    }

    ctx->pc = 0x337f78u;

    // 0x337f78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x337f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x337f7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x337f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x337f80: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x337f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x337f84: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x337f84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337f88: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x337f88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337f8c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x337f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x337f90: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x337f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x337f94: 0xc0cd984  jal         func_336610
    ctx->pc = 0x337F94u;
    SET_GPR_U32(ctx, 31, 0x337F9Cu);
    ctx->pc = 0x337F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337F94u;
    // 0x337f98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336610u, 0x337F94u, 0x337F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337F9Cu;
label_337f9c:
    // 0x337f9c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x337f9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337fa0: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x337FA0u;
    {
        const bool branch_taken_0x337fa0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x337FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337FA0u;
        // 0x337fa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337fa0) {
            ctx->pc = 0x337FE4u;
            goto label_337fe4;
        }
    }
    ctx->pc = 0x337FA8u;
    // 0x337fa8: 0xc0cda26  jal         func_336898
    ctx->pc = 0x337FA8u;
    SET_GPR_U32(ctx, 31, 0x337FB0u);
    ctx->pc = 0x337FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337FA8u;
    // 0x337fac: 0x24050024  addiu       $a1, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x337FA8u, 0x337FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337FB0u;
label_337fb0:
    // 0x337fb0: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x337fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x337fb4: 0x262401c4  addiu       $a0, $s1, 0x1C4
    ctx->pc = 0x337fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 452));
    // 0x337fb8: 0xc0efbe8  jal         func_3BEFA0
    ctx->pc = 0x337FB8u;
    SET_GPR_U32(ctx, 31, 0x337FC0u);
    ctx->pc = 0x337FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337FB8u;
    // 0x337fbc: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEFA0u, 0x337FB8u, 0x337FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337FC0u;
label_337fc0:
    // 0x337fc0: 0x8e0300bc  lw          $v1, 0xBC($s0)
    ctx->pc = 0x337fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x337fc4: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x337fc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x337fc8: 0x38630007  xori        $v1, $v1, 0x7
    ctx->pc = 0x337fc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)7);
    // 0x337fcc: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x337FCCu;
    {
        const bool branch_taken_0x337fcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x337fcc) {
            ctx->pc = 0x337FD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x337FCCu;
            // 0x337fd0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x337FE8u;
            goto label_337fe8;
        }
    }
    ctx->pc = 0x337FD4u;
    // 0x337fd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x337fd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337fd8: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x337fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x337fdc: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x337FDCu;
    SET_GPR_U32(ctx, 31, 0x337FE4u);
    ctx->pc = 0x337FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337FDCu;
    // 0x337fe0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x337FDCu, 0x337FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337FE4u;
label_337fe4:
    // 0x337fe4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x337fe4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_337fe8:
    // 0x337fe8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x337fe8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x337fec: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x337fecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x337ff0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x337ff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x337ff4: 0x3e00008  jr          $ra
    ctx->pc = 0x337FF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x337FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337FF4u;
        // 0x337ff8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337FF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x337FFCu;
    // 0x337ffc: 0x0  nop
    ctx->pc = 0x337ffcu;
    // NOP
    ctx->pc = 0x338000u;
}
