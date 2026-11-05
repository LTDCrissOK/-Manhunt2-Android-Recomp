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

// Function: sub_0039D1B0
// Address: 0x39d1b0 - 0x39d278
void sub_0039D1B0_0x39d1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039D1B0_0x39d1b0");
#endif

    switch (ctx->pc) {
        case 0x39d1e0u: goto label_39d1e0;
        case 0x39d200u: goto label_39d200;
        case 0x39d21cu: goto label_39d21c;
        case 0x39d234u: goto label_39d234;
        case 0x39d244u: goto label_39d244;
        case 0x39d264u: goto label_39d264;
        default: break;
    }

    ctx->pc = 0x39d1b0u;

    // 0x39d1b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x39d1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x39d1b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39d1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39d1b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39d1b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39d1bc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x39d1bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x39d1c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x39d1c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x39d1c4: 0x8e110008  lw          $s1, 0x8($s0)
    ctx->pc = 0x39d1c4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x39d1c8: 0x12200026  beqz        $s1, . + 4 + (0x26 << 2)
    ctx->pc = 0x39D1C8u;
    {
        const bool branch_taken_0x39d1c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D1C8u;
        // 0x39d1cc: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d1c8) {
            ctx->pc = 0x39D264u;
            goto label_39d264;
        }
    }
    ctx->pc = 0x39D1D0u;
    // 0x39d1d0: 0x50800025  beql        $a0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x39D1D0u;
    {
        const bool branch_taken_0x39d1d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x39d1d0) {
            ctx->pc = 0x39D1D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39D1D0u;
            // 0x39d1d4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39D268u;
            goto label_39d268;
        }
    }
    ctx->pc = 0x39D1D8u;
    // 0x39d1d8: 0xc0e647c  jal         func_3991F0
    ctx->pc = 0x39D1D8u;
    SET_GPR_U32(ctx, 31, 0x39D1E0u);
    ctx->pc = 0x3991F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3991F0u, 0x39D1D8u, 0x39D1E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D1E0u;
label_39d1e0:
    // 0x39d1e0: 0x3c057fff  lui         $a1, 0x7FFF
    ctx->pc = 0x39d1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32767 << 16));
    // 0x39d1e4: 0x82030002  lb          $v1, 0x2($s0)
    ctx->pc = 0x39d1e4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x39d1e8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x39d1e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39d1ec: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x39d1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x39d1f0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x39D1F0u;
    {
        const bool branch_taken_0x39d1f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x39D1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D1F0u;
        // 0x39d1f4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d1f0) {
            ctx->pc = 0x39D208u;
            goto label_39d208;
        }
    }
    ctx->pc = 0x39D1F8u;
    // 0x39d1f8: 0xc0e6798  jal         func_399E60
    ctx->pc = 0x39D1F8u;
    SET_GPR_U32(ctx, 31, 0x39D200u);
    ctx->pc = 0x39D1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D1F8u;
    // 0x39d1fc: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399E60u, 0x39D1F8u, 0x39D200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D200u;
label_39d200:
    // 0x39d200: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x39D200u;
    {
        const bool branch_taken_0x39d200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D200u;
        // 0x39d204: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d200) {
            ctx->pc = 0x39D268u;
            goto label_39d268;
        }
    }
    ctx->pc = 0x39D208u;
label_39d208:
    // 0x39d208: 0x8202006c  lb          $v0, 0x6C($s0)
    ctx->pc = 0x39d208u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x39d20c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x39D20Cu;
    {
        const bool branch_taken_0x39d20c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39D210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D20Cu;
        // 0x39d210: 0x24c307ff  addiu       $v1, $a2, 0x7FF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 2047));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d20c) {
            ctx->pc = 0x39D250u;
            goto label_39d250;
        }
    }
    ctx->pc = 0x39D214u;
    // 0x39d214: 0xc0e6434  jal         func_3990D0
    ctx->pc = 0x39D214u;
    SET_GPR_U32(ctx, 31, 0x39D21Cu);
    ctx->pc = 0x39D218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D214u;
    // 0x39d218: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3990D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3990D0u, 0x39D214u, 0x39D21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D21Cu;
label_39d21c:
    // 0x39d21c: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x39d21cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x39d220: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x39d220u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x39d224: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x39D224u;
    {
        const bool branch_taken_0x39d224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39D228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D224u;
        // 0x39d228: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d224) {
            ctx->pc = 0x39D234u;
            goto label_39d234;
        }
    }
    ctx->pc = 0x39D22Cu;
    // 0x39d22c: 0xc0e6446  jal         func_399118
    ctx->pc = 0x39D22Cu;
    SET_GPR_U32(ctx, 31, 0x39D234u);
    ctx->pc = 0x39D230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D22Cu;
    // 0x39d230: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399118u, 0x39D22Cu, 0x39D234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D234u;
label_39d234:
    // 0x39d234: 0x3c057fff  lui         $a1, 0x7FFF
    ctx->pc = 0x39d234u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32767 << 16));
    // 0x39d238: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x39d238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x39d23c: 0xc0e6798  jal         func_399E60
    ctx->pc = 0x39D23Cu;
    SET_GPR_U32(ctx, 31, 0x39D244u);
    ctx->pc = 0x39D240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D23Cu;
    // 0x39d240: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x399E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399E60u, 0x39D23Cu, 0x39D244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D244u;
label_39d244:
    // 0x39d244: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x39D244u;
    {
        const bool branch_taken_0x39d244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D244u;
        // 0x39d248: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d244) {
            ctx->pc = 0x39D268u;
            goto label_39d268;
        }
    }
    ctx->pc = 0x39D24Cu;
    // 0x39d24c: 0x0  nop
    ctx->pc = 0x39d24cu;
    // NOP
label_39d250:
    // 0x39d250: 0x28c20000  slti        $v0, $a2, 0x0
    ctx->pc = 0x39d250u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x39d254: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x39d254u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x39d258: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39d258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39d25c: 0xc0e66bc  jal         func_399AF0
    ctx->pc = 0x39D25Cu;
    SET_GPR_U32(ctx, 31, 0x39D264u);
    ctx->pc = 0x39D260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D25Cu;
    // 0x39d260: 0x62ac3  sra         $a1, $a2, 11 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 6), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399AF0u, 0x39D25Cu, 0x39D264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D264u;
label_39d264:
    // 0x39d264: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39d264u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_39d268:
    // 0x39d268: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x39d268u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x39d26c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x39d26cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39d270: 0x3e00008  jr          $ra
    ctx->pc = 0x39D270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39D274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D270u;
        // 0x39d274: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39D270u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39D278u;
}
