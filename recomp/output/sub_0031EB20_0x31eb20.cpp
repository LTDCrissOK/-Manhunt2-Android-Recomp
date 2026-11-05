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

// Function: sub_0031EB20
// Address: 0x31eb20 - 0x31ebc8
void sub_0031EB20_0x31eb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031EB20_0x31eb20");
#endif

    switch (ctx->pc) {
        case 0x31eb58u: goto label_31eb58;
        case 0x31eba0u: goto label_31eba0;
        default: break;
    }

    ctx->pc = 0x31eb20u;

    // 0x31eb20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x31eb20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x31eb24: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x31eb24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x31eb28: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x31eb28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x31eb2c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x31eb2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31eb30: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x31eb30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x31eb34: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x31eb34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31eb38: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x31eb38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x31eb3c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x31eb3cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31eb40: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x31eb40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x31eb44: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x31eb44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31eb48: 0xae500048  sw          $s0, 0x48($s2)
    ctx->pc = 0x31eb48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 16));
    // 0x31eb4c: 0xae530050  sw          $s3, 0x50($s2)
    ctx->pc = 0x31eb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 19));
    // 0x31eb50: 0xc0c7a9a  jal         func_31EA68
    ctx->pc = 0x31EB50u;
    SET_GPR_U32(ctx, 31, 0x31EB58u);
    ctx->pc = 0x31EB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EB50u;
    // 0x31eb54: 0xae46004c  sw          $a2, 0x4C($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EA68u, 0x31EB50u, 0x31EB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EB58u;
label_31eb58:
    // 0x31eb58: 0x2138018  mult        $s0, $s0, $s3
    ctx->pc = 0x31eb58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x31eb5c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x31eb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x31eb60: 0x27a30004  addiu       $v1, $sp, 0x4
    ctx->pc = 0x31eb60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x31eb64: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x31eb64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31eb68: 0x2e650009  sltiu       $a1, $s3, 0x9
    ctx->pc = 0x31eb68u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x31eb6c: 0x1080c2  srl         $s0, $s0, 3
    ctx->pc = 0x31eb6cu;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 3));
    // 0x31eb70: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x31eb70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
    // 0x31eb74: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x31eb74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x31eb78: 0x3a2180a  movz        $v1, $sp, $v0
    ctx->pc = 0x31eb78u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 29));
    // 0x31eb7c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x31eb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31eb80: 0xae510058  sw          $s1, 0x58($s2)
    ctx->pc = 0x31eb80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 17));
    // 0x31eb84: 0xae420054  sw          $v0, 0x54($s2)
    ctx->pc = 0x31eb84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
    // 0x31eb88: 0xa244005c  sb          $a0, 0x5C($s2)
    ctx->pc = 0x31eb88u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 92), (uint8_t)GPR_U32(ctx, 4));
    // 0x31eb8c: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x31EB8Cu;
    {
        const bool branch_taken_0x31eb8c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EB8Cu;
        // 0x31eb90: 0xae400060  sw          $zero, 0x60($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31eb8c) {
            ctx->pc = 0x31EBA4u;
            goto label_31eba4;
        }
    }
    ctx->pc = 0x31EB94u;
    // 0x31eb94: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x31eb94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x31eb98: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x31EB98u;
    SET_GPR_U32(ctx, 31, 0x31EBA0u);
    ctx->pc = 0x31EB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EB98u;
    // 0x31eb9c: 0x2642004  sllv        $a0, $a0, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 19) & 0x1F));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x31EB98u, 0x31EBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EBA0u;
label_31eba0:
    // 0x31eba0: 0xae420064  sw          $v0, 0x64($s2)
    ctx->pc = 0x31eba0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 2));
label_31eba4:
    // 0x31eba4: 0xae400030  sw          $zero, 0x30($s2)
    ctx->pc = 0x31eba4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 0));
    // 0x31eba8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31eba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31ebac: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x31ebacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31ebb0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x31ebb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x31ebb4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x31ebb4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31ebb8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x31ebb8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31ebbc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x31ebbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31ebc0: 0x3e00008  jr          $ra
    ctx->pc = 0x31EBC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31EBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EBC0u;
        // 0x31ebc4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31EBC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31EBC8u;
}
