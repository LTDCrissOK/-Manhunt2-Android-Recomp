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

// Function: sub_003A56A8
// Address: 0x3a56a8 - 0x3a5780
void sub_003A56A8_0x3a56a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A56A8_0x3a56a8");
#endif

    switch (ctx->pc) {
        case 0x3a5724u: goto label_3a5724;
        case 0x3a572cu: goto label_3a572c;
        case 0x3a5754u: goto label_3a5754;
        default: break;
    }

    ctx->pc = 0x3a56a8u;

    // 0x3a56a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a56a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a56ac: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a56acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a56b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a56b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a56b4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3a56b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3a56b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3a56b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a56bc: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A56BCu;
    {
        const bool branch_taken_0x3a56bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A56C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A56BCu;
        // 0x3a56c0: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a56bc) {
            ctx->pc = 0x3A56D0u;
            goto label_3a56d0;
        }
    }
    ctx->pc = 0x3A56C4u;
    // 0x3a56c4: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x3a56c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x3a56c8: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x3A56C8u;
    {
        const bool branch_taken_0x3a56c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A56CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A56C8u;
        // 0x3a56cc: 0xa04037a0  sb          $zero, 0x37A0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 14240), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a56c8) {
            ctx->pc = 0x3A575Cu;
            goto label_3a575c;
        }
    }
    ctx->pc = 0x3A56D0u;
label_3a56d0:
    // 0x3a56d0: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x3a56d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3a56d4: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x3a56d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x3a56d8: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x3A56D8u;
    {
        const bool branch_taken_0x3a56d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A56DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A56D8u;
        // 0x3a56dc: 0x2402005c  addiu       $v0, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a56d8) {
            ctx->pc = 0x3A5710u;
            goto label_3a5710;
        }
    }
    ctx->pc = 0x3A56E0u;
    // 0x3a56e0: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3A56E0u;
    {
        const bool branch_taken_0x3a56e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A56E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A56E0u;
        // 0x3a56e4: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a56e0) {
            ctx->pc = 0x3A5710u;
            goto label_3a5710;
        }
    }
    ctx->pc = 0x3A56E8u;
    // 0x3a56e8: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x3a56e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x3a56ec: 0x2448d950  addiu       $t0, $v0, -0x26B0
    ctx->pc = 0x3a56ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957392));
    // 0x3a56f0: 0x248737a0  addiu       $a3, $a0, 0x37A0
    ctx->pc = 0x3a56f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 14240));
    // 0x3a56f4: 0x81030000  lb          $v1, 0x0($t0)
    ctx->pc = 0x3a56f4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3a56f8: 0x81060001  lb          $a2, 0x1($t0)
    ctx->pc = 0x3a56f8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x3a56fc: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x3a56fcu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x4137A0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x4137A0u, _value); } while (0);
    // 0x3a5700: 0xa0e60001  sb          $a2, 0x1($a3)
    ctx->pc = 0x3a5700u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x4137A1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x4137A1u, _value); } while (0);
    // 0x3a5704: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3A5704u;
    {
        const bool branch_taken_0x3a5704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A5708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5704u;
        // 0x3a5708: 0x249137a0  addiu       $s1, $a0, 0x37A0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 14240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5704) {
            ctx->pc = 0x3A571Cu;
            goto label_3a571c;
        }
    }
    ctx->pc = 0x3A570Cu;
    // 0x3a570c: 0x0  nop
    ctx->pc = 0x3a570cu;
    // NOP
label_3a5710:
    // 0x3a5710: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x3a5710u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x3a5714: 0xa08037a0  sb          $zero, 0x37A0($a0)
    ctx->pc = 0x3a5714u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4137A0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x4137A0u, _value); } while (0);
    // 0x3a5718: 0x249137a0  addiu       $s1, $a0, 0x37A0
    ctx->pc = 0x3a5718u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 14240));
label_3a571c:
    // 0x3a571c: 0xc0efae1  jal         func_3BEB84
    ctx->pc = 0x3A571Cu;
    SET_GPR_U32(ctx, 31, 0x3A5724u);
    ctx->pc = 0x3A5720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A571Cu;
    // 0x3a5720: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEB84u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEB84u, 0x3A571Cu, 0x3A5724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5724u;
label_3a5724:
    // 0x3a5724: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x3A5724u;
    SET_GPR_U32(ctx, 31, 0x3A572Cu);
    ctx->pc = 0x3A5728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A5724u;
    // 0x3a5728: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x3A5724u, 0x3A572Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A572Cu;
label_3a572c:
    // 0x3a572c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a572cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a5730: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3a5730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3a5734: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x3a5734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x3a5738: 0x8042ffff  lb          $v0, -0x1($v0)
    ctx->pc = 0x3a5738u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294967295)));
    // 0x3a573c: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A573Cu;
    {
        const bool branch_taken_0x3a573c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x3A5740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A573Cu;
        // 0x3a5740: 0x2405005c  addiu       $a1, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a573c) {
            ctx->pc = 0x3A574Cu;
            goto label_3a574c;
        }
    }
    ctx->pc = 0x3A5744u;
    // 0x3a5744: 0x14450006  bne         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A5744u;
    {
        const bool branch_taken_0x3a5744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x3A5748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5744u;
        // 0x3a5748: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5744) {
            ctx->pc = 0x3A5760u;
            goto label_3a5760;
        }
    }
    ctx->pc = 0x3A574Cu;
label_3a574c:
    // 0x3a574c: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x3A574Cu;
    SET_GPR_U32(ctx, 31, 0x3A5754u);
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x3A574Cu, 0x3A5754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A5754u;
label_3a5754:
    // 0x3a5754: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3a5754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3a5758: 0xa040ffff  sb          $zero, -0x1($v0)
    ctx->pc = 0x3a5758u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294967295), (uint8_t)GPR_U32(ctx, 0));
label_3a575c:
    // 0x3a575c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a575cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a5760:
    // 0x3a5760: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a5760u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a5764: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a5764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a5768: 0x3e00008  jr          $ra
    ctx->pc = 0x3A5768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A576Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5768u;
        // 0x3a576c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A5768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A5770u;
    // 0x3a5770: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x3a5770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x3a5774: 0x0  nop
    ctx->pc = 0x3a5774u;
    // NOP
    // 0x3a5778: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3a5778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3a577c: 0x0  nop
    ctx->pc = 0x3a577cu;
    // NOP
    ctx->pc = 0x3a5780u;
}
