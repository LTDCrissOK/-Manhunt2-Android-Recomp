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

// Function: sub_003CFA18
// Address: 0x3cfa18 - 0x3cfaa8
void sub_003CFA18_0x3cfa18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CFA18_0x3cfa18");
#endif

    switch (ctx->pc) {
        case 0x3cfa54u: goto label_3cfa54;
        case 0x3cfa6cu: goto label_3cfa6c;
        case 0x3cfa80u: goto label_3cfa80;
        default: break;
    }

    ctx->pc = 0x3cfa18u;

    // 0x3cfa18: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3cfa18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3cfa1c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3cfa1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3cfa20: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x3cfa20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x3cfa24: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3cfa24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3cfa28: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3cfa28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3cfa2c: 0x2453d5ec  addiu       $s3, $v0, -0x2A14
    ctx->pc = 0x3cfa2cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956524));
    // 0x3cfa30: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3cfa30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3cfa34: 0x24715528  addiu       $s1, $v1, 0x5528
    ctx->pc = 0x3cfa34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 21800));
    // 0x3cfa38: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3cfa38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3cfa3c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3cfa3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cfa40: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3cfa40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3cfa44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3cfa44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cfa48: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3cfa48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cfa4c: 0xc0efa24  jal         func_3BE890
    ctx->pc = 0x3CFA4Cu;
    SET_GPR_U32(ctx, 31, 0x3CFA54u);
    ctx->pc = 0x3CFA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CFA4Cu;
    // 0x3cfa50: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE890u, 0x3CFA4Cu, 0x3CFA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CFA54u;
label_3cfa54:
    // 0x3cfa54: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3CFA54u;
    {
        const bool branch_taken_0x3cfa54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CFA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CFA54u;
        // 0x3cfa58: 0x3c100043  lui         $s0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cfa54) {
            ctx->pc = 0x3CFA84u;
            goto label_3cfa84;
        }
    }
    ctx->pc = 0x3CFA5Cu;
    // 0x3cfa5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3cfa5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cfa60: 0x8e05d6ac  lw          $a1, -0x2954($s0)
    ctx->pc = 0x3cfa60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294956716)));
    // 0x3cfa64: 0xc0efa24  jal         func_3BE890
    ctx->pc = 0x3CFA64u;
    SET_GPR_U32(ctx, 31, 0x3CFA6Cu);
    ctx->pc = 0x3CFA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CFA64u;
    // 0x3cfa68: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE890u, 0x3CFA64u, 0x3CFA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CFA6Cu;
label_3cfa6c:
    // 0x3cfa6c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3CFA6Cu;
    {
        const bool branch_taken_0x3cfa6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CFA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CFA6Cu;
        // 0x3cfa70: 0x8e05d6ac  lw          $a1, -0x2954($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294956716)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cfa6c) {
            ctx->pc = 0x3CFA84u;
            goto label_3cfa84;
        }
    }
    ctx->pc = 0x3CFA74u;
    // 0x3cfa74: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3cfa74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cfa78: 0xc0efa24  jal         func_3BE890
    ctx->pc = 0x3CFA78u;
    SET_GPR_U32(ctx, 31, 0x3CFA80u);
    ctx->pc = 0x3CFA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CFA78u;
    // 0x3cfa7c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE890u, 0x3CFA78u, 0x3CFA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CFA80u;
label_3cfa80:
    // 0x3cfa80: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x3cfa80u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3cfa84:
    // 0x3cfa84: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3cfa84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3cfa88: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3cfa88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3cfa8c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x3cfa8cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3cfa90: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3cfa90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3cfa94: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3cfa94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3cfa98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3cfa98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3cfa9c: 0x3e00008  jr          $ra
    ctx->pc = 0x3CFA9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CFAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CFA9Cu;
        // 0x3cfaa0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CFA9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3CFAA4u;
    // 0x3cfaa4: 0x0  nop
    ctx->pc = 0x3cfaa4u;
    // NOP
    ctx->pc = 0x3cfaa8u;
}
