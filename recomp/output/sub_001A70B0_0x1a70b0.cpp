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

// Function: sub_001A70B0
// Address: 0x1a70b0 - 0x1a7140
void sub_001A70B0_0x1a70b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A70B0_0x1a70b0");
#endif

    switch (ctx->pc) {
        case 0x1a70d0u: goto label_1a70d0;
        case 0x1a7128u: goto label_1a7128;
        default: break;
    }

    ctx->pc = 0x1a70b0u;

    // 0x1a70b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a70b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a70b4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a70b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a70b8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a70b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a70bc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a70bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a70c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a70c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a70c4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1a70c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1a70c8: 0xc06a026  jal         func_1A8098
    ctx->pc = 0x1A70C8u;
    SET_GPR_U32(ctx, 31, 0x1A70D0u);
    ctx->pc = 0x1A70CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A70C8u;
    // 0x1a70cc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8098u, 0x1A70C8u, 0x1A70D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A70D0u;
label_1a70d0:
    // 0x1a70d0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1a70d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a70d4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a70d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a70d8: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A70D8u;
    {
        const bool branch_taken_0x1a70d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A70DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A70D8u;
        // 0x1a70dc: 0x2410080d  addiu       $s0, $zero, 0x80D (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a70d8) {
            ctx->pc = 0x1A710Cu;
            goto label_1a710c;
        }
    }
    ctx->pc = 0x1A70E0u;
    // 0x1a70e0: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1a70e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1a70e4: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A70E4u;
    {
        const bool branch_taken_0x1a70e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A70E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A70E4u;
        // 0x1a70e8: 0x28620008  slti        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a70e4) {
            ctx->pc = 0x1A710Cu;
            goto label_1a710c;
        }
    }
    ctx->pc = 0x1A70ECu;
    // 0x1a70ec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A70ECu;
    {
        const bool branch_taken_0x1a70ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A70F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A70ECu;
        // 0x1a70f0: 0x240207b0  addiu       $v0, $zero, 0x7B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1968));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a70ec) {
            ctx->pc = 0x1A70FCu;
            goto label_1a70fc;
        }
    }
    ctx->pc = 0x1A70F4u;
    // 0x1a70f4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A70F4u;
    {
        const bool branch_taken_0x1a70f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A70F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A70F4u;
        // 0x1a70f8: 0x241007aa  addiu       $s0, $zero, 0x7AA (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1962));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a70f4) {
            ctx->pc = 0x1A7114u;
            goto label_1a7114;
        }
    }
    ctx->pc = 0x1A70FCu;
label_1a70fc:
    // 0x1a70fc: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A70FCu;
    {
        const bool branch_taken_0x1a70fc = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1A7100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A70FCu;
        // 0x1a7100: 0x240207af  addiu       $v0, $zero, 0x7AF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1967));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a70fc) {
            ctx->pc = 0x1A7118u;
            goto label_1a7118;
        }
    }
    ctx->pc = 0x1A7104u;
    // 0x1a7104: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A7104u;
    {
        const bool branch_taken_0x1a7104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7104u;
        // 0x1a7108: 0x241007a9  addiu       $s0, $zero, 0x7A9 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1961));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7104) {
            ctx->pc = 0x1A7114u;
            goto label_1a7114;
        }
    }
    ctx->pc = 0x1A710Cu;
label_1a710c:
    // 0x1a710c: 0x241007a8  addiu       $s0, $zero, 0x7A8
    ctx->pc = 0x1a710cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1960));
    // 0x1a7110: 0x240207ae  addiu       $v0, $zero, 0x7AE
    ctx->pc = 0x1a7110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1966));
label_1a7114:
    // 0x1a7114: 0x51800b  movn        $s0, $v0, $s1
    ctx->pc = 0x1a7114u;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
label_1a7118:
    // 0x1a7118: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a7118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a711c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1a711cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7120: 0xc069712  jal         func_1A5C48
    ctx->pc = 0x1A7120u;
    SET_GPR_U32(ctx, 31, 0x1A7128u);
    ctx->pc = 0x1A7124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7120u;
    // 0x1a7124: 0x24050036  addiu       $a1, $zero, 0x36 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x1A7120u, 0x1A7128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7128u;
label_1a7128:
    // 0x1a7128: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a7128u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a712c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a712cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a7130: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a7130u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a7134: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1a7134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a7138: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A713Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7138u;
        // 0x1a713c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7140u;
}
