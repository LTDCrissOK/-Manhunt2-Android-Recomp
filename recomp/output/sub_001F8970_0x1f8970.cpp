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

// Function: sub_001F8970
// Address: 0x1f8970 - 0x1f8a78
void sub_001F8970_0x1f8970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F8970_0x1f8970");
#endif

    switch (ctx->pc) {
        case 0x1f89ccu: goto label_1f89cc;
        case 0x1f8a04u: goto label_1f8a04;
        default: break;
    }

    ctx->pc = 0x1f8970u;

    // 0x1f8970: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f8970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f8974: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f8974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f8978: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f8978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f897c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1f897cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8980: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f8980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f8984: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f8984u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8988: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1f8988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1f898c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1f898cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f8990: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1f8990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x1f8994: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x1F8994u;
    {
        const bool branch_taken_0x1f8994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8994u;
        // 0x1f8998: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8994) {
            ctx->pc = 0x1F8A58u;
            goto label_1f8a58;
        }
    }
    ctx->pc = 0x1F899Cu;
    // 0x1f899c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1f899cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1f89a0: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1f89a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1f89a4: 0x8c4315f0  lw          $v1, 0x15F0($v0)
    ctx->pc = 0x1f89a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5616)));
    // 0x1f89a8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1f89a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1f89ac: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F89ACu;
    {
        const bool branch_taken_0x1f89ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F89B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F89ACu;
        // 0x1f89b0: 0x30a20001  andi        $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f89ac) {
            ctx->pc = 0x1F89BCu;
            goto label_1f89bc;
        }
    }
    ctx->pc = 0x1F89B4u;
    // 0x1f89b4: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x1f89b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1f89b8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1f89b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1f89bc:
    // 0x1f89bc: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1F89BCu;
    {
        const bool branch_taken_0x1f89bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F89C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F89BCu;
        // 0x1f89c0: 0x3c04004a  lui         $a0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f89bc) {
            ctx->pc = 0x1F8A40u;
            goto label_1f8a40;
        }
    }
    ctx->pc = 0x1F89C4u;
    // 0x1f89c4: 0xc0806aa  jal         func_201AA8
    ctx->pc = 0x1F89C4u;
    SET_GPR_U32(ctx, 31, 0x1F89CCu);
    ctx->pc = 0x1F89C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F89C4u;
    // 0x1f89c8: 0x24849c38  addiu       $a0, $a0, -0x63C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201AA8u, 0x1F89C4u, 0x1F89CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F89CCu;
label_1f89cc:
    // 0x1f89cc: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x1F89CCu;
    {
        const bool branch_taken_0x1f89cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f89cc) {
            ctx->pc = 0x1F89D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F89CCu;
            // 0x1f89d0: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F8A44u;
            goto label_1f8a44;
        }
    }
    ctx->pc = 0x1F89D4u;
    // 0x1f89d4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1f89d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f89d8: 0x8c450054  lw          $a1, 0x54($v0)
    ctx->pc = 0x1f89d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x1f89dc: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x1F89DCu;
    {
        const bool branch_taken_0x1f89dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F89E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F89DCu;
        // 0x1f89e0: 0x2403002c  addiu       $v1, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f89dc) {
            ctx->pc = 0x1F8A10u;
            goto label_1f8a10;
        }
    }
    ctx->pc = 0x1F89E4u;
    // 0x1f89e4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1f89e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f89e8: 0x432018  mult        $a0, $v0, $v1
    ctx->pc = 0x1f89e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1f89ec: 0x911021  addu        $v0, $a0, $s1
    ctx->pc = 0x1f89ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1f89f0: 0x8c444f98  lw          $a0, 0x4F98($v0)
    ctx->pc = 0x1f89f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20376)));
    // 0x1f89f4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F89F4u;
    {
        const bool branch_taken_0x1f89f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F89F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F89F4u;
        // 0x1f89f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f89f4) {
            ctx->pc = 0x1F8A04u;
            goto label_1f8a04;
        }
    }
    ctx->pc = 0x1F89FCu;
    // 0x1f89fc: 0xc07e654  jal         func_1F9950
    ctx->pc = 0x1F89FCu;
    SET_GPR_U32(ctx, 31, 0x1F8A04u);
    ctx->pc = 0x1F8A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F89FCu;
    // 0x1f8a00: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9950u, 0x1F89FCu, 0x1F8A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F8A04u;
label_1f8a04:
    // 0x1f8a04: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1f8a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f8a08: 0xac400054  sw          $zero, 0x54($v0)
    ctx->pc = 0x1f8a08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 0));
    // 0x1f8a0c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1f8a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1f8a10:
    // 0x1f8a10: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f8a10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f8a14: 0x240635e3  addiu       $a2, $zero, 0x35E3
    ctx->pc = 0x1f8a14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13795));
    // 0x1f8a18: 0x2407fffb  addiu       $a3, $zero, -0x5
    ctx->pc = 0x1f8a18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1f8a1c: 0xac450070  sw          $a1, 0x70($v0)
    ctx->pc = 0x1f8a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 5));
    // 0x1f8a20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f8a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f8a24: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1f8a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f8a28: 0xac650070  sw          $a1, 0x70($v1)
    ctx->pc = 0x1f8a28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 112), GPR_U32(ctx, 5));
    // 0x1f8a2c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1f8a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f8a30: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x1f8a30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x1f8a34: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1f8a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f8a38: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F8A38u;
    {
        const bool branch_taken_0x1f8a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8A38u;
        // 0x1f8a3c: 0xac670000  sw          $a3, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8a38) {
            ctx->pc = 0x1F8A5Cu;
            goto label_1f8a5c;
        }
    }
    ctx->pc = 0x1F8A40u;
label_1f8a40:
    // 0x1f8a40: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1f8a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1f8a44:
    // 0x1f8a44: 0x8c620068  lw          $v0, 0x68($v1)
    ctx->pc = 0x1f8a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
    // 0x1f8a48: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8A48u;
    {
        const bool branch_taken_0x1f8a48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8A48u;
        // 0x1f8a4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8a48) {
            ctx->pc = 0x1F8A5Cu;
            goto label_1f8a5c;
        }
    }
    ctx->pc = 0x1F8A50u;
    // 0x1f8a50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f8a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f8a54: 0xac620068  sw          $v0, 0x68($v1)
    ctx->pc = 0x1f8a54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 2));
label_1f8a58:
    // 0x1f8a58: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f8a58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f8a5c:
    // 0x1f8a5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f8a5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f8a60: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f8a60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f8a64: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f8a64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f8a68: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1f8a68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8a6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F8A6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F8A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8A6Cu;
        // 0x1f8a70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8A6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F8A74u;
    // 0x1f8a74: 0x0  nop
    ctx->pc = 0x1f8a74u;
    // NOP
    ctx->pc = 0x1f8a78u;
}
