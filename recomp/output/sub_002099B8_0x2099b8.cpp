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

// Function: sub_002099B8
// Address: 0x2099b8 - 0x209a90
void sub_002099B8_0x2099b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002099B8_0x2099b8");
#endif

    switch (ctx->pc) {
        case 0x209a2cu: goto label_209a2c;
        default: break;
    }

    ctx->pc = 0x2099b8u;

    // 0x2099b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2099b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2099bc: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x2099bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x2099c0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2099c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2099c4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2099c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2099c8: 0x3c120048  lui         $s2, 0x48
    ctx->pc = 0x2099c8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)72 << 16));
    // 0x2099cc: 0x8e482b64  lw          $t0, 0x2B64($s2)
    ctx->pc = 0x2099ccu;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x482B64u));
    // 0x2099d0: 0x3c130048  lui         $s3, 0x48
    ctx->pc = 0x2099d0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)72 << 16));
    // 0x2099d4: 0x8e652b5c  lw          $a1, 0x2B5C($s3)
    ctx->pc = 0x2099d4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x482B5Cu));
    // 0x2099d8: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x2099d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x2099dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2099dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2099e0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2099e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2099e4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2099e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2099e8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2099e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2099ec: 0x3c110048  lui         $s1, 0x48
    ctx->pc = 0x2099ecu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)72 << 16));
    // 0x2099f0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2099f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2099f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2099f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2099f8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2099f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2099fc: 0x241505c0  addiu       $s5, $zero, 0x5C0
    ctx->pc = 0x2099fcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1472));
    // 0x209a00: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x209a00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x209a04: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x209a04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x209a08: 0x2474f0c0  addiu       $s4, $v1, -0xF40
    ctx->pc = 0x209a08u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963392));
    // 0x209a0c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x209a0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209a10: 0x8e262b60  lw          $a2, 0x2B60($s1)
    ctx->pc = 0x209a10u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x482B60u));
    // 0x209a14: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x209a14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209a18: 0x8e642b5c  lw          $a0, 0x2B5C($s3)
    ctx->pc = 0x209a18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11100)));
    // 0x209a1c: 0xd53018  mult        $a2, $a2, $s5
    ctx->pc = 0x209a1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x209a20: 0xae482b64  sw          $t0, 0x2B64($s2)
    ctx->pc = 0x209a20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 11108), GPR_U32(ctx, 8));
    // 0x209a24: 0xc0825b2  jal         func_2096C8
    ctx->pc = 0x209A24u;
    SET_GPR_U32(ctx, 31, 0x209A2Cu);
    ctx->pc = 0x209A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209A24u;
    // 0x209a28: 0xd43021  addu        $a2, $a2, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2096C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2096C8u, 0x209A24u, 0x209A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209A2Cu;
label_209a2c:
    // 0x209a2c: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x209A2Cu;
    {
        const bool branch_taken_0x209a2c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x209A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209A2Cu;
        // 0x209a30: 0x8e222b60  lw          $v0, 0x2B60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209a2c) {
            ctx->pc = 0x209A40u;
            goto label_209a40;
        }
    }
    ctx->pc = 0x209A34u;
    // 0x209a34: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x209a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x209a38: 0xae222b60  sw          $v0, 0x2B60($s1)
    ctx->pc = 0x209a38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11104), GPR_U32(ctx, 2));
    // 0x209a3c: 0x8e222b60  lw          $v0, 0x2B60($s1)
    ctx->pc = 0x209a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11104)));
label_209a40:
    // 0x209a40: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x209a40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
    // 0x209a44: 0x2463d0c0  addiu       $v1, $v1, -0x2F40
    ctx->pc = 0x209a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955200));
    // 0x209a48: 0xae402b64  sw          $zero, 0x2B64($s2)
    ctx->pc = 0x209a48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 11108), GPR_U32(ctx, 0));
    // 0x209a4c: 0x553018  mult        $a2, $v0, $s5
    ctx->pc = 0x209a4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x209a50: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x209a50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x209a54: 0x21300  sll         $v0, $v0, 12
    ctx->pc = 0x209a54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 12));
    // 0x209a58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x209a58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x209a5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x209a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x209a60: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x209a60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x209a64: 0xae622b5c  sw          $v0, 0x2B5C($s3)
    ctx->pc = 0x209a64u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 11100), GPR_U32(ctx, 2));
    // 0x209a68: 0xd42021  addu        $a0, $a2, $s4
    ctx->pc = 0x209a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 20)));
    // 0x209a6c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x209a6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x209a70: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x209a70u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x209a74: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x209a74u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x209a78: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x209a78u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x209a7c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x209a7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x209a80: 0xaca42b6c  sw          $a0, 0x2B6C($a1)
    ctx->pc = 0x209a80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 11116), GPR_U32(ctx, 4));
    // 0x209a84: 0x3e00008  jr          $ra
    ctx->pc = 0x209A84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209A84u;
        // 0x209a88: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209A84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209A8Cu;
    // 0x209a8c: 0x0  nop
    ctx->pc = 0x209a8cu;
    // NOP
    ctx->pc = 0x209a90u;
}
