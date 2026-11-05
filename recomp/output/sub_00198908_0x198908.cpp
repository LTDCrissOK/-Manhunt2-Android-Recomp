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

// Function: sub_00198908
// Address: 0x198908 - 0x1989c8
void sub_00198908_0x198908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00198908_0x198908");
#endif

    switch (ctx->pc) {
        case 0x198908u: goto label_198908;
        case 0x19890cu: goto label_19890c;
        case 0x198910u: goto label_198910;
        case 0x198914u: goto label_198914;
        case 0x198918u: goto label_198918;
        case 0x19891cu: goto label_19891c;
        case 0x198920u: goto label_198920;
        case 0x198924u: goto label_198924;
        case 0x198928u: goto label_198928;
        case 0x19892cu: goto label_19892c;
        case 0x198930u: goto label_198930;
        case 0x198934u: goto label_198934;
        case 0x198938u: goto label_198938;
        case 0x19893cu: goto label_19893c;
        case 0x198940u: goto label_198940;
        case 0x198944u: goto label_198944;
        case 0x198948u: goto label_198948;
        case 0x19894cu: goto label_19894c;
        case 0x198950u: goto label_198950;
        case 0x198954u: goto label_198954;
        case 0x198958u: goto label_198958;
        case 0x19895cu: goto label_19895c;
        case 0x198960u: goto label_198960;
        case 0x198964u: goto label_198964;
        case 0x198968u: goto label_198968;
        case 0x19896cu: goto label_19896c;
        case 0x198970u: goto label_198970;
        case 0x198974u: goto label_198974;
        case 0x198978u: goto label_198978;
        case 0x19897cu: goto label_19897c;
        case 0x198980u: goto label_198980;
        case 0x198984u: goto label_198984;
        case 0x198988u: goto label_198988;
        case 0x19898cu: goto label_19898c;
        case 0x198990u: goto label_198990;
        case 0x198994u: goto label_198994;
        case 0x198998u: goto label_198998;
        case 0x19899cu: goto label_19899c;
        case 0x1989a0u: goto label_1989a0;
        case 0x1989a4u: goto label_1989a4;
        case 0x1989a8u: goto label_1989a8;
        case 0x1989acu: goto label_1989ac;
        case 0x1989b0u: goto label_1989b0;
        case 0x1989b4u: goto label_1989b4;
        case 0x1989b8u: goto label_1989b8;
        case 0x1989bcu: goto label_1989bc;
        case 0x1989c0u: goto label_1989c0;
        case 0x1989c4u: goto label_1989c4;
        default: break;
    }

    ctx->pc = 0x198908u;

label_198908:
    // 0x198908: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x198908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_19890c:
    // 0x19890c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x19890cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_198910:
    // 0x198910: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x198910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_198914:
    // 0x198914: 0x24421288  addiu       $v0, $v0, 0x1288
    ctx->pc = 0x198914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4744));
label_198918:
    // 0x198918: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x198918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_19891c:
    // 0x19891c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19891cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_198920:
    // 0x198920: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x198920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_198924:
    // 0x198924: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x198924u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_198928:
    // 0x198928: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x198928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_19892c:
    // 0x19892c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_198930:
    if (ctx->pc == 0x198930u) {
        ctx->pc = 0x198930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19892Cu;
        // 0x198930: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198934u;
        goto label_198934;
    }
    ctx->pc = 0x19892Cu;
    {
        const bool branch_taken_0x19892c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x198930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19892Cu;
        // 0x198930: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19892c) {
            ctx->pc = 0x198944u;
            goto label_198944;
        }
    }
    ctx->pc = 0x198934u;
label_198934:
    // 0x198934: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x198934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_198938:
    // 0x198938: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x198938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_19893c:
    // 0x19893c: 0x40f809  jalr        $v0
label_198940:
    if (ctx->pc == 0x198940u) {
        ctx->pc = 0x198940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19893Cu;
        // 0x198940: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198944u;
        goto label_198944;
    }
    ctx->pc = 0x19893Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x198944u);
        ctx->pc = 0x198940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19893Cu;
        // 0x198940: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19893Cu, 0x198944u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x198944u;
label_198944:
    // 0x198944: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x198944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_198948:
    // 0x198948: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_19894c:
    if (ctx->pc == 0x19894Cu) {
        ctx->pc = 0x19894Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198948u;
        // 0x19894c: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198950u;
        goto label_198950;
    }
    ctx->pc = 0x198948u;
    {
        const bool branch_taken_0x198948 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x198948) {
            ctx->pc = 0x19894Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x198948u;
            // 0x19894c: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x198964u;
            goto label_198964;
        }
    }
    ctx->pc = 0x198950u;
label_198950:
    // 0x198950: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x198950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_198954:
    // 0x198954: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x198954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_198958:
    // 0x198958: 0x40f809  jalr        $v0
label_19895c:
    if (ctx->pc == 0x19895Cu) {
        ctx->pc = 0x19895Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198958u;
        // 0x19895c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x198960u;
        goto label_198960;
    }
    ctx->pc = 0x198958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x198960u);
        ctx->pc = 0x19895Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198958u;
        // 0x19895c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198958u, 0x198960u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x198960u;
label_198960:
    // 0x198960: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x198960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_198964:
    // 0x198964: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_198968:
    if (ctx->pc == 0x198968u) {
        ctx->pc = 0x198968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198964u;
        // 0x198968: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19896Cu;
        goto label_19896c;
    }
    ctx->pc = 0x198964u;
    {
        const bool branch_taken_0x198964 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x198968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198964u;
        // 0x198968: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198964) {
            ctx->pc = 0x198980u;
            goto label_198980;
        }
    }
    ctx->pc = 0x19896Cu;
label_19896c:
    // 0x19896c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x19896cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_198970:
    // 0x198970: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x198970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_198974:
    // 0x198974: 0x40f809  jalr        $v0
label_198978:
    if (ctx->pc == 0x198978u) {
        ctx->pc = 0x198978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198974u;
        // 0x198978: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19897Cu;
        goto label_19897c;
    }
    ctx->pc = 0x198974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19897Cu);
        ctx->pc = 0x198978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x198974u;
        // 0x198978: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x198974u, 0x19897Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19897Cu;
label_19897c:
    // 0x19897c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x19897cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_198980:
    // 0x198980: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x198980u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
label_198984:
    // 0x198984: 0x24420f90  addiu       $v0, $v0, 0xF90
    ctx->pc = 0x198984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3984));
label_198988:
    // 0x198988: 0x24630fc8  addiu       $v1, $v1, 0xFC8
    ctx->pc = 0x198988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
label_19898c:
    // 0x19898c: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x19898cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
label_198990:
    // 0x198990: 0x32240001  andi        $a0, $s1, 0x1
    ctx->pc = 0x198990u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_198994:
    // 0x198994: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x198994u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_198998:
    // 0x198998: 0xae020118  sw          $v0, 0x118($s0)
    ctx->pc = 0x198998u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 2));
label_19899c:
    // 0x19899c: 0xae0200e8  sw          $v0, 0xE8($s0)
    ctx->pc = 0x19899cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
label_1989a0:
    // 0x1989a0: 0xae020078  sw          $v0, 0x78($s0)
    ctx->pc = 0x1989a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
label_1989a4:
    // 0x1989a4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_1989a8:
    if (ctx->pc == 0x1989A8u) {
        ctx->pc = 0x1989A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1989A4u;
        // 0x1989a8: 0xae020058  sw          $v0, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1989ACu;
        goto label_1989ac;
    }
    ctx->pc = 0x1989A4u;
    {
        const bool branch_taken_0x1989a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1989A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1989A4u;
        // 0x1989a8: 0xae020058  sw          $v0, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1989a4) {
            ctx->pc = 0x1989B4u;
            goto label_1989b4;
        }
    }
    ctx->pc = 0x1989ACu;
label_1989ac:
    // 0x1989ac: 0xc0f5222  jal         func_3D4888
label_1989b0:
    if (ctx->pc == 0x1989B0u) {
        ctx->pc = 0x1989B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1989ACu;
        // 0x1989b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1989B4u;
        goto label_1989b4;
    }
    ctx->pc = 0x1989ACu;
    SET_GPR_U32(ctx, 31, 0x1989B4u);
    ctx->pc = 0x1989B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1989ACu;
    // 0x1989b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x1989ACu, 0x1989B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1989B4u;
label_1989b4:
    // 0x1989b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1989b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1989b8:
    // 0x1989b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1989b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1989bc:
    // 0x1989bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1989bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1989c0:
    // 0x1989c0: 0x3e00008  jr          $ra
label_1989c4:
    if (ctx->pc == 0x1989C4u) {
        ctx->pc = 0x1989C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1989C0u;
        // 0x1989c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1989C8u;
        goto label_fallthrough_0x1989c0;
    }
    ctx->pc = 0x1989C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1989C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1989C0u;
        // 0x1989c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1989C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1989c0:
    ctx->pc = 0x1989C8u;
}
