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

// Function: sub_003800A0
// Address: 0x3800a0 - 0x380130
void sub_003800A0_0x3800a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003800A0_0x3800a0");
#endif

    switch (ctx->pc) {
        case 0x3800a0u: goto label_3800a0;
        case 0x3800a4u: goto label_3800a4;
        case 0x3800a8u: goto label_3800a8;
        case 0x3800acu: goto label_3800ac;
        case 0x3800b0u: goto label_3800b0;
        case 0x3800b4u: goto label_3800b4;
        case 0x3800b8u: goto label_3800b8;
        case 0x3800bcu: goto label_3800bc;
        case 0x3800c0u: goto label_3800c0;
        case 0x3800c4u: goto label_3800c4;
        case 0x3800c8u: goto label_3800c8;
        case 0x3800ccu: goto label_3800cc;
        case 0x3800d0u: goto label_3800d0;
        case 0x3800d4u: goto label_3800d4;
        case 0x3800d8u: goto label_3800d8;
        case 0x3800dcu: goto label_3800dc;
        case 0x3800e0u: goto label_3800e0;
        case 0x3800e4u: goto label_3800e4;
        case 0x3800e8u: goto label_3800e8;
        case 0x3800ecu: goto label_3800ec;
        case 0x3800f0u: goto label_3800f0;
        case 0x3800f4u: goto label_3800f4;
        case 0x3800f8u: goto label_3800f8;
        case 0x3800fcu: goto label_3800fc;
        case 0x380100u: goto label_380100;
        case 0x380104u: goto label_380104;
        case 0x380108u: goto label_380108;
        case 0x38010cu: goto label_38010c;
        case 0x380110u: goto label_380110;
        case 0x380114u: goto label_380114;
        case 0x380118u: goto label_380118;
        case 0x38011cu: goto label_38011c;
        case 0x380120u: goto label_380120;
        case 0x380124u: goto label_380124;
        case 0x380128u: goto label_380128;
        case 0x38012cu: goto label_38012c;
        default: break;
    }

    ctx->pc = 0x3800a0u;

label_3800a0:
    // 0x3800a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3800a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3800a4:
    // 0x3800a4: 0x248400b0  addiu       $a0, $a0, 0xB0
    ctx->pc = 0x3800a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
label_3800a8:
    // 0x3800a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3800a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3800ac:
    // 0x3800ac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3800acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_3800b0:
    // 0x3800b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3800b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3800b4:
    // 0x3800b4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3800b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_3800b8:
    // 0x3800b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3800b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3800bc:
    // 0x3800bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3800bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3800c0:
    // 0x3800c0: 0x8c900064  lw          $s0, 0x64($a0)
    ctx->pc = 0x3800c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
label_3800c4:
    // 0x3800c4: 0x12110011  beq         $s0, $s1, . + 4 + (0x11 << 2)
label_3800c8:
    if (ctx->pc == 0x3800C8u) {
        ctx->pc = 0x3800C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3800C4u;
        // 0x3800c8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3800CCu;
        goto label_3800cc;
    }
    ctx->pc = 0x3800C4u;
    {
        const bool branch_taken_0x3800c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x3800C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3800C4u;
        // 0x3800c8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3800c4) {
            ctx->pc = 0x38010Cu;
            goto label_38010c;
        }
    }
    ctx->pc = 0x3800CCu;
label_3800cc:
    // 0x3800cc: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x3800ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3800d0:
    // 0x3800d0: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x3800d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_3800d4:
    // 0x3800d4: 0x0  nop
    ctx->pc = 0x3800d4u;
    // NOP
label_3800d8:
    // 0x3800d8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_3800dc:
    if (ctx->pc == 0x3800DCu) {
        ctx->pc = 0x3800DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3800D8u;
        // 0x3800dc: 0x8e100064  lw          $s0, 0x64($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3800E0u;
        goto label_3800e0;
    }
    ctx->pc = 0x3800D8u;
    {
        const bool branch_taken_0x3800d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3800d8) {
            ctx->pc = 0x3800DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3800D8u;
            // 0x3800dc: 0x8e100064  lw          $s0, 0x64($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3800F8u;
            goto label_3800f8;
        }
    }
    ctx->pc = 0x3800E0u;
label_3800e0:
    // 0x3800e0: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x3800e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_3800e4:
    // 0x3800e4: 0x8e050054  lw          $a1, 0x54($s0)
    ctx->pc = 0x3800e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3800e8:
    // 0x3800e8: 0x40f809  jalr        $v0
label_3800ec:
    if (ctx->pc == 0x3800ECu) {
        ctx->pc = 0x3800ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3800E8u;
        // 0x3800ec: 0x8e060058  lw          $a2, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3800F0u;
        goto label_3800f0;
    }
    ctx->pc = 0x3800E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3800F0u);
        ctx->pc = 0x3800ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3800E8u;
        // 0x3800ec: 0x8e060058  lw          $a2, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3800E8u, 0x3800F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3800F0u;
label_3800f0:
    // 0x3800f0: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x3800f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_3800f4:
    // 0x3800f4: 0x8e100064  lw          $s0, 0x64($s0)
    ctx->pc = 0x3800f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_3800f8:
    // 0x3800f8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3800f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3800fc:
    // 0x3800fc: 0x2111826  xor         $v1, $s0, $s1
    ctx->pc = 0x3800fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 17));
label_380100:
    // 0x380100: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x380100u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_380104:
    // 0x380104: 0x5040fff4  beql        $v0, $zero, . + 4 + (-0xC << 2)
label_380108:
    if (ctx->pc == 0x380108u) {
        ctx->pc = 0x380108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380104u;
        // 0x380108: 0x8e020050  lw          $v0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38010Cu;
        goto label_38010c;
    }
    ctx->pc = 0x380104u;
    {
        const bool branch_taken_0x380104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x380104) {
            ctx->pc = 0x380108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x380104u;
            // 0x380108: 0x8e020050  lw          $v0, 0x50($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3800D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3800d8;
        }
    }
    ctx->pc = 0x38010Cu;
label_38010c:
    // 0x38010c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x38010cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_380110:
    // 0x380110: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x380110u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_380114:
    // 0x380114: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x380114u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_380118:
    // 0x380118: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x380118u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_38011c:
    // 0x38011c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x38011cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_380120:
    // 0x380120: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x380120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_380124:
    // 0x380124: 0x3e00008  jr          $ra
label_380128:
    if (ctx->pc == 0x380128u) {
        ctx->pc = 0x380128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380124u;
        // 0x380128: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38012Cu;
        goto label_38012c;
    }
    ctx->pc = 0x380124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x380128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x380124u;
        // 0x380128: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x380124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38012Cu;
label_38012c:
    // 0x38012c: 0x0  nop
    ctx->pc = 0x38012cu;
    // NOP
    ctx->pc = 0x380130u;
}
