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

// Function: sub_00311BE8
// Address: 0x311be8 - 0x311cf0
void sub_00311BE8_0x311be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00311BE8_0x311be8");
#endif

    switch (ctx->pc) {
        case 0x311c18u: goto label_311c18;
        case 0x311c58u: goto label_311c58;
        case 0x311c84u: goto label_311c84;
        case 0x311ca0u: goto label_311ca0;
        case 0x311cccu: goto label_311ccc;
        default: break;
    }

    ctx->pc = 0x311be8u;

    // 0x311be8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x311be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x311bec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x311becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x311bf0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x311bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x311bf4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x311bf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311bf8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x311bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x311bfc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x311bfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311c00: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x311c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x311c04: 0x24140050  addiu       $s4, $zero, 0x50
    ctx->pc = 0x311c04u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x311c08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x311c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x311c0c: 0x24150050  addiu       $s5, $zero, 0x50
    ctx->pc = 0x311c0cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x311c10: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x311c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x311c14: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x311c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_311c18:
    // 0x311c18: 0x2341818  mult        $v1, $s1, $s4
    ctx->pc = 0x311c18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x311c1c: 0x26330001  addiu       $s3, $s1, 0x1
    ctx->pc = 0x311c1cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x311c20: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x311c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x311c24: 0x8c44022c  lw          $a0, 0x22C($v0)
    ctx->pc = 0x311c24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 556)));
    // 0x311c28: 0x10800016  beqz        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x311C28u;
    {
        const bool branch_taken_0x311c28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x311C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311C28u;
        // 0x311c2c: 0xac510228  sw          $s1, 0x228($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 552), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311c28) {
            ctx->pc = 0x311C84u;
            goto label_311c84;
        }
    }
    ctx->pc = 0x311C30u;
    // 0x311c30: 0x8c82fff0  lw          $v0, -0x10($a0)
    ctx->pc = 0x311c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967280)));
    // 0x311c34: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x311c34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x311c38: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x311c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x311c3c: 0x5083000d  beql        $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x311C3Cu;
    {
        const bool branch_taken_0x311c3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x311c3c) {
            ctx->pc = 0x311C40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x311C3Cu;
            // 0x311c40: 0x2341818  mult        $v1, $s1, $s4 (Delay Slot)
            { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x311C74u;
            goto label_311c74;
        }
    }
    ctx->pc = 0x311C44u;
    // 0x311c44: 0x2352018  mult        $a0, $s1, $s5
    ctx->pc = 0x311c44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x311c48: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x311c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x311c4c: 0x8c42022c  lw          $v0, 0x22C($v0)
    ctx->pc = 0x311c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 556)));
    // 0x311c50: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x311c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
    // 0x311c54: 0x0  nop
    ctx->pc = 0x311c54u;
    // NOP
label_311c58:
    // 0x311c58: 0x0  nop
    ctx->pc = 0x311c58u;
    // NOP
    // 0x311c5c: 0x0  nop
    ctx->pc = 0x311c5cu;
    // NOP
    // 0x311c60: 0x0  nop
    ctx->pc = 0x311c60u;
    // NOP
    // 0x311c64: 0x0  nop
    ctx->pc = 0x311c64u;
    // NOP
    // 0x311c68: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x311C68u;
    {
        const bool branch_taken_0x311c68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x311C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311C68u;
        // 0x311c6c: 0x2463fff0  addiu       $v1, $v1, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311c68) {
            ctx->pc = 0x311C58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_311c58;
        }
    }
    ctx->pc = 0x311C70u;
    // 0x311c70: 0x2341818  mult        $v1, $s1, $s4
    ctx->pc = 0x311c70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_311c74:
    // 0x311c74: 0x721021  addu        $v0, $v1, $s2
    ctx->pc = 0x311c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x311c78: 0x8c44022c  lw          $a0, 0x22C($v0)
    ctx->pc = 0x311c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 556)));
    // 0x311c7c: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x311C7Cu;
    SET_GPR_U32(ctx, 31, 0x311C84u);
    ctx->pc = 0x311C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311C7Cu;
    // 0x311c80: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x311C7Cu, 0x311C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311C84u;
label_311c84:
    // 0x311c84: 0x2341018  mult        $v0, $s1, $s4
    ctx->pc = 0x311c84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x311c88: 0x528021  addu        $s0, $v0, $s2
    ctx->pc = 0x311c88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x311c8c: 0x8e040230  lw          $a0, 0x230($s0)
    ctx->pc = 0x311c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 560)));
    // 0x311c90: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x311C90u;
    {
        const bool branch_taken_0x311c90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x311C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311C90u;
        // 0x311c94: 0xae00022c  sw          $zero, 0x22C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 556), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311c90) {
            ctx->pc = 0x311CA0u;
            goto label_311ca0;
        }
    }
    ctx->pc = 0x311C98u;
    // 0x311c98: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x311C98u;
    SET_GPR_U32(ctx, 31, 0x311CA0u);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x311C98u, 0x311CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311CA0u;
label_311ca0:
    // 0x311ca0: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x311ca0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x311ca4: 0xae000238  sw          $zero, 0x238($s0)
    ctx->pc = 0x311ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 568), GPR_U32(ctx, 0));
    // 0x311ca8: 0xae000230  sw          $zero, 0x230($s0)
    ctx->pc = 0x311ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 560), GPR_U32(ctx, 0));
    // 0x311cac: 0x2a22000a  slti        $v0, $s1, 0xA
    ctx->pc = 0x311cacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x311cb0: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
    ctx->pc = 0x311CB0u;
    {
        const bool branch_taken_0x311cb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x311CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311CB0u;
        // 0x311cb4: 0xae000234  sw          $zero, 0x234($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 564), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311cb0) {
            ctx->pc = 0x311C18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_311c18;
        }
    }
    ctx->pc = 0x311CB8u;
    // 0x311cb8: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x311cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x311cbc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x311CBCu;
    {
        const bool branch_taken_0x311cbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x311CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311CBCu;
        // 0x311cc0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x311cbc) {
            ctx->pc = 0x311CD0u;
            goto label_311cd0;
        }
    }
    ctx->pc = 0x311CC4u;
    // 0x311cc4: 0xc0c7aae  jal         func_31EAB8
    ctx->pc = 0x311CC4u;
    SET_GPR_U32(ctx, 31, 0x311CCCu);
    ctx->pc = 0x311CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x311CC4u;
    // 0x311cc8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EAB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EAB8u, 0x311CC4u, 0x311CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x311CCCu;
label_311ccc:
    // 0x311ccc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x311cccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_311cd0:
    // 0x311cd0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x311cd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x311cd4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x311cd4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x311cd8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x311cd8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x311cdc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x311cdcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x311ce0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x311ce0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x311ce4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x311ce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x311ce8: 0x3e00008  jr          $ra
    ctx->pc = 0x311CE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x311CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x311CE8u;
        // 0x311cec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x311CE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x311CF0u;
}
