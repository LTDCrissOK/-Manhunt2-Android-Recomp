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

// Function: sub_001A7140
// Address: 0x1a7140 - 0x1a71d0
void sub_001A7140_0x1a7140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A7140_0x1a7140");
#endif

    switch (ctx->pc) {
        case 0x1a7160u: goto label_1a7160;
        case 0x1a71b8u: goto label_1a71b8;
        default: break;
    }

    ctx->pc = 0x1a7140u;

    // 0x1a7140: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a7140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a7144: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a7144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a7148: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a7148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a714c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a714cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7150: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a7150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a7154: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1a7154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1a7158: 0xc06a026  jal         func_1A8098
    ctx->pc = 0x1A7158u;
    SET_GPR_U32(ctx, 31, 0x1A7160u);
    ctx->pc = 0x1A715Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7158u;
    // 0x1a715c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8098u, 0x1A7158u, 0x1A7160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7160u;
label_1a7160:
    // 0x1a7160: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1a7160u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7164: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a7164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a7168: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A7168u;
    {
        const bool branch_taken_0x1a7168 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A716Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7168u;
        // 0x1a716c: 0x2410080d  addiu       $s0, $zero, 0x80D (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7168) {
            ctx->pc = 0x1A719Cu;
            goto label_1a719c;
        }
    }
    ctx->pc = 0x1A7170u;
    // 0x1a7170: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1a7170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1a7174: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A7174u;
    {
        const bool branch_taken_0x1a7174 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A7178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7174u;
        // 0x1a7178: 0x28620008  slti        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7174) {
            ctx->pc = 0x1A719Cu;
            goto label_1a719c;
        }
    }
    ctx->pc = 0x1A717Cu;
    // 0x1a717c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A717Cu;
    {
        const bool branch_taken_0x1a717c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A7180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A717Cu;
        // 0x1a7180: 0x240207b3  addiu       $v0, $zero, 0x7B3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1971));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a717c) {
            ctx->pc = 0x1A718Cu;
            goto label_1a718c;
        }
    }
    ctx->pc = 0x1A7184u;
    // 0x1a7184: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A7184u;
    {
        const bool branch_taken_0x1a7184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7184u;
        // 0x1a7188: 0x241007ad  addiu       $s0, $zero, 0x7AD (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1965));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7184) {
            ctx->pc = 0x1A71A4u;
            goto label_1a71a4;
        }
    }
    ctx->pc = 0x1A718Cu;
label_1a718c:
    // 0x1a718c: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A718Cu;
    {
        const bool branch_taken_0x1a718c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1A7190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A718Cu;
        // 0x1a7190: 0x240207b2  addiu       $v0, $zero, 0x7B2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1970));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a718c) {
            ctx->pc = 0x1A71A8u;
            goto label_1a71a8;
        }
    }
    ctx->pc = 0x1A7194u;
    // 0x1a7194: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A7194u;
    {
        const bool branch_taken_0x1a7194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7194u;
        // 0x1a7198: 0x241007ac  addiu       $s0, $zero, 0x7AC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1964));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7194) {
            ctx->pc = 0x1A71A4u;
            goto label_1a71a4;
        }
    }
    ctx->pc = 0x1A719Cu;
label_1a719c:
    // 0x1a719c: 0x241007ab  addiu       $s0, $zero, 0x7AB
    ctx->pc = 0x1a719cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1963));
    // 0x1a71a0: 0x240207b1  addiu       $v0, $zero, 0x7B1
    ctx->pc = 0x1a71a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1969));
label_1a71a4:
    // 0x1a71a4: 0x51800b  movn        $s0, $v0, $s1
    ctx->pc = 0x1a71a4u;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
label_1a71a8:
    // 0x1a71a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a71a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a71ac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1a71acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a71b0: 0xc069712  jal         func_1A5C48
    ctx->pc = 0x1A71B0u;
    SET_GPR_U32(ctx, 31, 0x1A71B8u);
    ctx->pc = 0x1A71B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A71B0u;
    // 0x1a71b4: 0x24050036  addiu       $a1, $zero, 0x36 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x1A71B0u, 0x1A71B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A71B8u;
label_1a71b8:
    // 0x1a71b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a71b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a71bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a71bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a71c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a71c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a71c4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1a71c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a71c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A71C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A71CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A71C8u;
        // 0x1a71cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A71C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A71D0u;
}
