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

// Function: sub_0025A928
// Address: 0x25a928 - 0x25a9e8
void sub_0025A928_0x25a928(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025A928_0x25a928");
#endif

    ctx->pc = 0x25a928u;

    // 0x25a928: 0x2402059d  addiu       $v0, $zero, 0x59D
    ctx->pc = 0x25a928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1437));
    // 0x25a92c: 0x10a2001f  beq         $a1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x25A92Cu;
    {
        const bool branch_taken_0x25a92c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x25A930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A92Cu;
        // 0x25a930: 0x28a2059e  slti        $v0, $a1, 0x59E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1438) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a92c) {
            ctx->pc = 0x25A9ACu;
            goto label_25a9ac;
        }
    }
    ctx->pc = 0x25A934u;
    // 0x25a934: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x25A934u;
    {
        const bool branch_taken_0x25a934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A934u;
        // 0x25a938: 0x2402059b  addiu       $v0, $zero, 0x59B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1435));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a934) {
            ctx->pc = 0x25A95Cu;
            goto label_25a95c;
        }
    }
    ctx->pc = 0x25A93Cu;
    // 0x25a93c: 0x10a2001f  beq         $a1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x25A93Cu;
    {
        const bool branch_taken_0x25a93c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x25A940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A93Cu;
        // 0x25a940: 0x28a2059c  slti        $v0, $a1, 0x59C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1436) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a93c) {
            ctx->pc = 0x25A9BCu;
            goto label_25a9bc;
        }
    }
    ctx->pc = 0x25A944u;
    // 0x25a944: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x25A944u;
    {
        const bool branch_taken_0x25a944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A944u;
        // 0x25a948: 0x2402059a  addiu       $v0, $zero, 0x59A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1434));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a944) {
            ctx->pc = 0x25A9CCu;
            goto label_25a9cc;
        }
    }
    ctx->pc = 0x25A94Cu;
    // 0x25a94c: 0x10a20013  beq         $a1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x25A94Cu;
    {
        const bool branch_taken_0x25a94c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x25a94c) {
            ctx->pc = 0x25A99Cu;
            goto label_25a99c;
        }
    }
    ctx->pc = 0x25A954u;
    // 0x25a954: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x25A954u;
    {
        const bool branch_taken_0x25a954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a954) {
            ctx->pc = 0x25A9DCu;
            goto label_25a9dc;
        }
    }
    ctx->pc = 0x25A95Cu;
label_25a95c:
    // 0x25a95c: 0x2402067b  addiu       $v0, $zero, 0x67B
    ctx->pc = 0x25a95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1659));
    // 0x25a960: 0x10a20012  beq         $a1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x25A960u;
    {
        const bool branch_taken_0x25a960 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x25A964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A960u;
        // 0x25a964: 0x28a2067c  slti        $v0, $a1, 0x67C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1660) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a960) {
            ctx->pc = 0x25A9ACu;
            goto label_25a9ac;
        }
    }
    ctx->pc = 0x25A968u;
    // 0x25a968: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x25A968u;
    {
        const bool branch_taken_0x25a968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A968u;
        // 0x25a96c: 0x2402067a  addiu       $v0, $zero, 0x67A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1658));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a968) {
            ctx->pc = 0x25A980u;
            goto label_25a980;
        }
    }
    ctx->pc = 0x25A970u;
    // 0x25a970: 0x10a2000a  beq         $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x25A970u;
    {
        const bool branch_taken_0x25a970 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x25a970) {
            ctx->pc = 0x25A99Cu;
            goto label_25a99c;
        }
    }
    ctx->pc = 0x25A978u;
    // 0x25a978: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x25A978u;
    {
        const bool branch_taken_0x25a978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a978) {
            ctx->pc = 0x25A9DCu;
            goto label_25a9dc;
        }
    }
    ctx->pc = 0x25A980u;
label_25a980:
    // 0x25a980: 0x2402067c  addiu       $v0, $zero, 0x67C
    ctx->pc = 0x25a980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1660));
    // 0x25a984: 0x10a20011  beq         $a1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x25A984u;
    {
        const bool branch_taken_0x25a984 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x25A988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A984u;
        // 0x25a988: 0x2402067d  addiu       $v0, $zero, 0x67D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1661));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a984) {
            ctx->pc = 0x25A9CCu;
            goto label_25a9cc;
        }
    }
    ctx->pc = 0x25A98Cu;
    // 0x25a98c: 0x10a2000b  beq         $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x25A98Cu;
    {
        const bool branch_taken_0x25a98c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x25a98c) {
            ctx->pc = 0x25A9BCu;
            goto label_25a9bc;
        }
    }
    ctx->pc = 0x25A994u;
    // 0x25a994: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x25A994u;
    {
        const bool branch_taken_0x25a994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25a994) {
            ctx->pc = 0x25A9DCu;
            goto label_25a9dc;
        }
    }
    ctx->pc = 0x25A99Cu;
label_25a99c:
    // 0x25a99c: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x25a99cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x25a9a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25a9a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25a9a4: 0x3e00008  jr          $ra
    ctx->pc = 0x25A9A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A9A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A9ACu;
label_25a9ac:
    // 0x25a9ac: 0x3c01c1c8  lui         $at, 0xC1C8
    ctx->pc = 0x25a9acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49608 << 16));
    // 0x25a9b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25a9b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25a9b4: 0x3e00008  jr          $ra
    ctx->pc = 0x25A9B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A9B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A9BCu;
label_25a9bc:
    // 0x25a9bc: 0x3c01c325  lui         $at, 0xC325
    ctx->pc = 0x25a9bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49957 << 16));
    // 0x25a9c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25a9c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25a9c4: 0x3e00008  jr          $ra
    ctx->pc = 0x25A9C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A9C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A9CCu;
label_25a9cc:
    // 0x25a9cc: 0x3c014302  lui         $at, 0x4302
    ctx->pc = 0x25a9ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17154 << 16));
    // 0x25a9d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x25a9d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25a9d4: 0x3e00008  jr          $ra
    ctx->pc = 0x25A9D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A9D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A9DCu;
label_25a9dc:
    // 0x25a9dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x25a9dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25a9e0: 0x3e00008  jr          $ra
    ctx->pc = 0x25A9E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A9E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A9E8u;
}
