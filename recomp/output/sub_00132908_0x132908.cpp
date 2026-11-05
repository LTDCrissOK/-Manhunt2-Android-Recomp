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

// Function: sub_00132908
// Address: 0x132908 - 0x1329e0
void sub_00132908_0x132908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00132908_0x132908");
#endif

    switch (ctx->pc) {
        case 0x132928u: goto label_132928;
        case 0x132938u: goto label_132938;
        case 0x132944u: goto label_132944;
        case 0x132960u: goto label_132960;
        case 0x13296cu: goto label_13296c;
        case 0x132980u: goto label_132980;
        case 0x13299cu: goto label_13299c;
        case 0x1329a8u: goto label_1329a8;
        case 0x1329bcu: goto label_1329bc;
        default: break;
    }

    ctx->pc = 0x132908u;

    // 0x132908: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x132908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13290c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13290cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x132910: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x132910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x132914: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x132914u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132918: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x132918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x13291c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x13291cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x132920: 0xc04cc20  jal         func_133080
    ctx->pc = 0x132920u;
    SET_GPR_U32(ctx, 31, 0x132928u);
    ctx->pc = 0x132924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132920u;
    // 0x132924: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133080u, 0x132920u, 0x132928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132928u;
label_132928:
    // 0x132928: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x132928u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13292c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13292cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132930: 0xc045618  jal         func_115860
    ctx->pc = 0x132930u;
    SET_GPR_U32(ctx, 31, 0x132938u);
    ctx->pc = 0x132934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132930u;
    // 0x132934: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115860u, 0x132930u, 0x132938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132938u;
label_132938:
    // 0x132938: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x132938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13293c: 0xc04cd54  jal         func_133550
    ctx->pc = 0x13293Cu;
    SET_GPR_U32(ctx, 31, 0x132944u);
    ctx->pc = 0x132940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13293Cu;
    // 0x132940: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133550u, 0x13293Cu, 0x132944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132944u;
label_132944:
    // 0x132944: 0x54400020  bnel        $v0, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x132944u;
    {
        const bool branch_taken_0x132944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x132944) {
            ctx->pc = 0x132948u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132944u;
            // 0x132948: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1329C8u;
            goto label_1329c8;
        }
    }
    ctx->pc = 0x13294Cu;
    // 0x13294c: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x13294cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x132950: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x132950u;
    {
        const bool branch_taken_0x132950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x132950) {
            ctx->pc = 0x132954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132950u;
            // 0x132954: 0x8e020020  lw          $v0, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13298Cu;
            goto label_13298c;
        }
    }
    ctx->pc = 0x132958u;
    // 0x132958: 0xc045616  jal         func_115858
    ctx->pc = 0x132958u;
    SET_GPR_U32(ctx, 31, 0x132960u);
    ctx->pc = 0x13295Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132958u;
    // 0x13295c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115858u, 0x132958u, 0x132960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132960u;
label_132960:
    // 0x132960: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x132960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x132964: 0xc04561c  jal         func_115870
    ctx->pc = 0x132964u;
    SET_GPR_U32(ctx, 31, 0x13296Cu);
    ctx->pc = 0x132968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132964u;
    // 0x132968: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115870u, 0x132964u, 0x13296Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13296Cu;
label_13296c:
    // 0x13296c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13296Cu;
    {
        const bool branch_taken_0x13296c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x132970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13296Cu;
        // 0x132970: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13296c) {
            ctx->pc = 0x132988u;
            goto label_132988;
        }
    }
    ctx->pc = 0x132974u;
    // 0x132974: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x132974u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x132978: 0xc04ccfc  jal         func_1333F0
    ctx->pc = 0x132978u;
    SET_GPR_U32(ctx, 31, 0x132980u);
    ctx->pc = 0x13297Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132978u;
    // 0x13297c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1333F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1333F0u, 0x132978u, 0x132980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132980u;
label_132980:
    // 0x132980: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x132980u;
    {
        const bool branch_taken_0x132980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132980u;
        // 0x132984: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132980) {
            ctx->pc = 0x1329B4u;
            goto label_1329b4;
        }
    }
    ctx->pc = 0x132988u;
label_132988:
    // 0x132988: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x132988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_13298c:
    // 0x13298c: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x13298Cu;
    {
        const bool branch_taken_0x13298c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13298c) {
            ctx->pc = 0x132990u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13298Cu;
            // 0x132990: 0xae110020  sw          $s1, 0x20($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1329C4u;
            goto label_1329c4;
        }
    }
    ctx->pc = 0x132994u;
    // 0x132994: 0xc045616  jal         func_115858
    ctx->pc = 0x132994u;
    SET_GPR_U32(ctx, 31, 0x13299Cu);
    ctx->pc = 0x132998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132994u;
    // 0x132998: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115858u, 0x132994u, 0x13299Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13299Cu;
label_13299c:
    // 0x13299c: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x13299cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1329a0: 0xc04561c  jal         func_115870
    ctx->pc = 0x1329A0u;
    SET_GPR_U32(ctx, 31, 0x1329A8u);
    ctx->pc = 0x1329A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1329A0u;
    // 0x1329a4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115870u, 0x1329A0u, 0x1329A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1329A8u;
label_1329a8:
    // 0x1329a8: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1329A8u;
    {
        const bool branch_taken_0x1329a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1329a8) {
            ctx->pc = 0x1329ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1329A8u;
            // 0x1329ac: 0xae110020  sw          $s1, 0x20($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1329C4u;
            goto label_1329c4;
        }
    }
    ctx->pc = 0x1329B0u;
    // 0x1329b0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1329b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1329b4:
    // 0x1329b4: 0xc043be8  jal         func_10EFA0
    ctx->pc = 0x1329B4u;
    SET_GPR_U32(ctx, 31, 0x1329BCu);
    ctx->pc = 0x1329B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1329B4u;
    // 0x1329b8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EFA0u, 0x1329B4u, 0x1329BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1329BCu;
label_1329bc:
    // 0x1329bc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1329BCu;
    {
        const bool branch_taken_0x1329bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1329C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1329BCu;
        // 0x1329c0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1329bc) {
            ctx->pc = 0x1329C8u;
            goto label_1329c8;
        }
    }
    ctx->pc = 0x1329C4u;
label_1329c4:
    // 0x1329c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1329c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1329c8:
    // 0x1329c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1329c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1329cc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1329ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1329d0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1329d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1329d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1329D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1329D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1329D4u;
        // 0x1329d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1329D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1329DCu;
    // 0x1329dc: 0x0  nop
    ctx->pc = 0x1329dcu;
    // NOP
    ctx->pc = 0x1329e0u;
}
