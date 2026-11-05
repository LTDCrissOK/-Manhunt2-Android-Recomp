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

// Function: sub_0037CFE0
// Address: 0x37cfe0 - 0x37d1b0
void sub_0037CFE0_0x37cfe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037CFE0_0x37cfe0");
#endif

    switch (ctx->pc) {
        case 0x37cff0u: goto label_37cff0;
        default: break;
    }

    ctx->pc = 0x37cfe0u;

    // 0x37cfe0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x37cfe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37cfe4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37cfe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37cfe8: 0xc0df3c8  jal         func_37CF20
    ctx->pc = 0x37CFE8u;
    SET_GPR_U32(ctx, 31, 0x37CFF0u);
    ctx->pc = 0x37CF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37CF20u, 0x37CFE8u, 0x37CFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CFF0u;
label_37cff0:
    // 0x37cff0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37cff0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37cff4: 0x3e00008  jr          $ra
    ctx->pc = 0x37CFF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37CFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CFF4u;
        // 0x37cff8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37CFF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37CFFCu;
    // 0x37cffc: 0x0  nop
    ctx->pc = 0x37cffcu;
    // NOP
    // 0x37d000: 0x1e10800  .word       0x01E10800                   # sll         $at, $at, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37d000u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 1), 0));
    // 0x37d004: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37d004u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37d008: 0x1e20801  .word       0x01E20801                   # INVALID     $t7, $v0, 0x801 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37d008u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x37D008 raw=0x01E20801");
    // 0x37d00c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37d00cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37d010: 0x1ff0802  .word       0x01FF0802                   # srl         $at, $ra, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37d010u;
    SET_GPR_S32(ctx, 1, (int32_t)SRL32(GPR_U32(ctx, 31), 0));
    // 0x37d014: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37d014u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37d018: 0x800106bc  lb          $at, 0x6BC($zero)
    ctx->pc = 0x37d018u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x6BCu));
    // 0x37d01c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37d01cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37d020: 0x8440034  j           func_11000D0
    ctx->pc = 0x37D020u;
    ctx->pc = 0x37D024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D020u;
    // 0x37d024: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11000D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11000D0u, 0x37D020u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37D028u;
    // 0x37d028: 0x80040934  lb          $a0, 0x934($zero)
    ctx->pc = 0x37d028u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x934u));
    // 0x37d02c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37d02cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37d030: 0x9020033  j           func_40800CC
    ctx->pc = 0x37D030u;
    ctx->pc = 0x37D034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D030u;
    // 0x37d034: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40800CCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40800CCu, 0x37D030u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37D038u;
    // 0x37d038: 0x800410b0  lb          $a0, 0x10B0($zero)
    ctx->pc = 0x37d038u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x10B0u));
    // 0x37d03c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37d03cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37d040: 0x8230033  j           func_8C00CC
    ctx->pc = 0x37D040u;
    ctx->pc = 0x37D044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D040u;
    // 0x37d044: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x8C00CCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8C00CCu, 0x37D040u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37D048u;
    // 0x37d048: 0x800418f0  lb          $a0, 0x18F0($zero)
    ctx->pc = 0x37d048u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x18F0u));
    // 0x37d04c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37d04cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37d050: 0x8240034  j           func_9000D0
    ctx->pc = 0x37D050u;
    ctx->pc = 0x37D054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D050u;
    // 0x37d054: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x9000D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x9000D0u, 0x37D050u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37D058u;
    // 0x37d058: 0x80012130  lb          $at, 0x2130($zero)
    ctx->pc = 0x37d058u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x2130u));
    // 0x37d05c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37d05cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37d060: 0x10042001  beq         $zero, $a0, . + 4 + (0x2001 << 2)
    ctx->pc = 0x37D060u;
    {
        const bool branch_taken_0x37d060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        ctx->pc = 0x37D064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D060u;
        // 0x37d064: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d060) {
            ctx->pc = 0x385068u;
            return;
        }
    }
    ctx->pc = 0x37D068u;
    // 0x37d068: 0x84117ff  j           func_1045FFC
    ctx->pc = 0x37D068u;
    ctx->pc = 0x37D06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D068u;
    // 0x37d06c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1045FFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1045FFCu, 0x37D068u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37D070u;
    // 0x37d070: 0x12080806  beq         $s0, $t0, . + 4 + (0x806 << 2)
    ctx->pc = 0x37D070u;
    {
        const bool branch_taken_0x37d070 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 8));
        ctx->pc = 0x37D074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D070u;
        // 0x37d074: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d070) {
            ctx->pc = 0x37F08Cu;
            return;
        }
    }
    ctx->pc = 0x37D078u;
    // 0x37d078: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37d078u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37d07c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37d07cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37d080: 0x5a004002  blezl       $s0, . + 4 + (0x4002 << 2)
    ctx->pc = 0x37D080u;
    {
        const bool branch_taken_0x37d080 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x37d080) {
            ctx->pc = 0x37D084u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37D080u;
            // 0x37d084: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38D08Cu;
            return;
        }
    }
    ctx->pc = 0x37D088u;
    // 0x37d088: 0x81e31b7c  lb          $v1, 0x1B7C($t7)
    ctx->pc = 0x37d088u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
    // 0x37d08c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37d08cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37d090: 0x10010806  beq         $zero, $at, . + 4 + (0x806 << 2)
    ctx->pc = 0x37D090u;
    {
        const bool branch_taken_0x37d090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        ctx->pc = 0x37D094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D090u;
        // 0x37d094: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d090) {
            ctx->pc = 0x37F0ACu;
            return;
        }
    }
    ctx->pc = 0x37D098u;
    // 0x37d098: 0x80030870  lb          $v1, 0x870($zero)
    ctx->pc = 0x37d098u;
    SET_GPR_S32(ctx, 3, (int8_t)FAST_READ8(0x870u));
    // 0x37d09c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37d09cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37d0a0: 0x12010801  beq         $s0, $at, . + 4 + (0x801 << 2)
    ctx->pc = 0x37D0A0u;
    {
        const bool branch_taken_0x37d0a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        ctx->pc = 0x37D0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D0A0u;
        // 0x37d0a4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d0a0) {
            ctx->pc = 0x37F0A8u;
            return;
        }
    }
    ctx->pc = 0x37D0A8u;
    // 0x37d0a8: 0x81e31b7c  lb          $v1, 0x1B7C($t7)
    ctx->pc = 0x37d0a8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
    // 0x37d0ac: 0x1e4193c  .word       0x01E4193C                   # dsll32      $v1, $a0, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37d0acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 4));
    // 0x37d0b0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37d0b0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37d0b4: 0x1e011bf  .word       0x01E011BF                   # dsra32      $v0, $zero, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37d0b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 0) >> (32 + 6));
    // 0x37d0b8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37d0b8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37d0bc: 0x1e40969  .word       0x01E40969                   # mtsa        $t7 # 00040940 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x37d0bcu;
    ctx->sa = GPR_U32(ctx, 15) & 0x7F;
    // 0x37d0c0: 0x81e31b7c  lb          $v1, 0x1B7C($t7)
    ctx->pc = 0x37d0c0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
    // 0x37d0c4: 0x1e4193c  .word       0x01E4193C                   # dsll32      $v1, $a0, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37d0c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 4));
    // 0x37d0c8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37d0c8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37d0cc: 0x1ff29af  .word       0x01FF29AF                   # dsubu       $a1, $t7, $ra # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37d0ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 15) - GPR_U64(ctx, 31));
    // 0x37d0d0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37d0d0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37d0d4: 0x1e011bf  .word       0x01E011BF                   # dsra32      $v0, $zero, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37d0d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 0) >> (32 + 6));
    // 0x37d0d8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37d0d8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37d0dc: 0x1e40969  .word       0x01E40969                   # mtsa        $t7 # 00040940 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x37d0dcu;
    ctx->sa = GPR_U32(ctx, 15) & 0x7F;
    // 0x37d0e0: 0x81e31b7c  lb          $v1, 0x1B7C($t7)
    ctx->pc = 0x37d0e0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
    // 0x37d0e4: 0x1e4193c  .word       0x01E4193C                   # dsll32      $v1, $a0, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37d0e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 4));
    // 0x37d0e8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37d0e8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37d0ec: 0x1e7317c  .word       0x01E7317C                   # dsll32      $a2, $a3, 5 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37d0ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 5));
    // 0x37d0f0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37d0f0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37d0f4: 0x1ff29af  .word       0x01FF29AF                   # dsubu       $a1, $t7, $ra # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37d0f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 15) - GPR_U64(ctx, 31));
    // 0x37d0f8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37d0f8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37d0fc: 0x1e011bf  .word       0x01E011BF                   # dsra32      $v0, $zero, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37d0fcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 0) >> (32 + 6));
    // 0x37d100: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37d100u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37d104: 0x1e40969  .word       0x01E40969                   # mtsa        $t7 # 00040940 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x37d104u;
    ctx->sa = GPR_U32(ctx, 15) & 0x7F;
    // 0x37d108: 0x81e31b7c  lb          $v1, 0x1B7C($t7)
    ctx->pc = 0x37d108u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
    // 0x37d10c: 0x1e4193c  .word       0x01E4193C                   # dsll32      $v1, $a0, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37d10cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 4));
    // 0x37d110: 0x3e43801  .word       0x03E43801                   # INVALID     $ra, $a0, 0x3801 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37d110u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x37D110 raw=0x03E43801");
    // 0x37d114: 0x1e7317c  .word       0x01E7317C                   # dsll32      $a2, $a3, 5 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37d114u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 5));
    // 0x37d118: 0x10042003  beq         $zero, $a0, . + 4 + (0x2003 << 2)
    ctx->pc = 0x37D118u;
    {
        const bool branch_taken_0x37d118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        ctx->pc = 0x37D11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D118u;
        // 0x37d11c: 0x1ff29af  .word       0x01FF29AF                   # dsubu       $a1, $t7, $ra # 00000180 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 15) - GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d118) {
            ctx->pc = 0x385128u;
            return;
        }
    }
    ctx->pc = 0x37D120u;
    // 0x37d120: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37d120u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37d124: 0x1e011bf  .word       0x01E011BF                   # dsra32      $v0, $zero, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37d124u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 0) >> (32 + 6));
    // 0x37d128: 0x52011ffc  beql        $s0, $at, . + 4 + (0x1FFC << 2)
    ctx->pc = 0x37D128u;
    {
        const bool branch_taken_0x37d128 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x37d128) {
            ctx->pc = 0x37D12Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37D128u;
            // 0x37d12c: 0x1e40969  .word       0x01E40969                   # mtsa        $t7 # 00040940 <InstrIdType: R5900_SPECIAL> (Delay Slot)
            ctx->sa = GPR_U32(ctx, 15) & 0x7F;
            ctx->in_delay_slot = false;
            ctx->pc = 0x38511Cu;
            return;
        }
    }
    ctx->pc = 0x37D130u;
    // 0x37d130: 0x81e31b7c  lb          $v1, 0x1B7C($t7)
    ctx->pc = 0x37d130u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
    // 0x37d134: 0x1e4193c  .word       0x01E4193C                   # dsll32      $v1, $a0, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37d134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 4));
    // 0x37d138: 0x3e43801  .word       0x03E43801                   # INVALID     $ra, $a0, 0x3801 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37d138u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x37D138 raw=0x03E43801");
    // 0x37d13c: 0x1e7317c  .word       0x01E7317C                   # dsll32      $a2, $a3, 5 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37d13cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 5));
    // 0x37d140: 0x10042003  beq         $zero, $a0, . + 4 + (0x2003 << 2)
    ctx->pc = 0x37D140u;
    {
        const bool branch_taken_0x37d140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        ctx->pc = 0x37D144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D140u;
        // 0x37d144: 0x1ff29af  .word       0x01FF29AF                   # dsubu       $a1, $t7, $ra # 00000180 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 15) - GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d140) {
            ctx->pc = 0x385150u;
            return;
        }
    }
    ctx->pc = 0x37D148u;
    // 0x37d148: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37d148u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37d14c: 0x1e011bf  .word       0x01E011BF                   # dsra32      $v0, $zero, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37d14cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 0) >> (32 + 6));
    // 0x37d150: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37d150u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37d154: 0x1e40969  .word       0x01E40969                   # mtsa        $t7 # 00040940 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x37d154u;
    ctx->sa = GPR_U32(ctx, 15) & 0x7F;
    // 0x37d158: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37d158u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37d15c: 0x1e4193c  .word       0x01E4193C                   # dsll32      $v1, $a0, 4 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37d15cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 4));
    // 0x37d160: 0x3e43801  .word       0x03E43801                   # INVALID     $ra, $a0, 0x3801 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37d160u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x37D160 raw=0x03E43801");
    // 0x37d164: 0x1e7317c  .word       0x01E7317C                   # dsll32      $a2, $a3, 5 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37d164u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 5));
    // 0x37d168: 0x10042003  beq         $zero, $a0, . + 4 + (0x2003 << 2)
    ctx->pc = 0x37D168u;
    {
        const bool branch_taken_0x37d168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        ctx->pc = 0x37D16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D168u;
        // 0x37d16c: 0x1ff29af  .word       0x01FF29AF                   # dsubu       $a1, $t7, $ra # 00000180 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 15) - GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d168) {
            ctx->pc = 0x385178u;
            return;
        }
    }
    ctx->pc = 0x37D170u;
    // 0x37d170: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37d170u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37d174: 0x1e011bf  .word       0x01E011BF                   # dsra32      $v0, $zero, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37d174u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 0) >> (32 + 6));
    // 0x37d178: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37d178u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37d17c: 0x1e40969  .word       0x01E40969                   # mtsa        $t7 # 00040940 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x37d17cu;
    ctx->sa = GPR_U32(ctx, 15) & 0x7F;
    // 0x37d180: 0x3e43801  .word       0x03E43801                   # INVALID     $ra, $a0, 0x3801 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37d180u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x37D180 raw=0x03E43801");
    // 0x37d184: 0x1e7317c  .word       0x01E7317C                   # dsll32      $a2, $a3, 5 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37d184u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 5));
    // 0x37d188: 0x10042003  beq         $zero, $a0, . + 4 + (0x2003 << 2)
    ctx->pc = 0x37D188u;
    {
        const bool branch_taken_0x37d188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        ctx->pc = 0x37D18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D188u;
        // 0x37d18c: 0x1ff29af  .word       0x01FF29AF                   # dsubu       $a1, $t7, $ra # 00000180 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 15) - GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d188) {
            ctx->pc = 0x385198u;
            return;
        }
    }
    ctx->pc = 0x37D190u;
    // 0x37d190: 0x3e43801  .word       0x03E43801                   # INVALID     $ra, $a0, 0x3801 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37d190u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x37D190 raw=0x03E43801");
    // 0x37d194: 0x1e7317c  .word       0x01E7317C                   # dsll32      $a2, $a3, 5 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37d194u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) << (32 + 5));
    // 0x37d198: 0x48007800  .word       0x48007800                   # INVALID     $zero, $zero, 0x7800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x37d198u;
    throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x37D198 raw=0x48007800");
    // 0x37d19c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37d19cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37d1a0: 0x3e43804  sllv        $a3, $a0, $ra
    ctx->pc = 0x37d1a0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 31) & 0x1F));
    // 0x37d1a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37d1a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37d1a8: 0x0  nop
    ctx->pc = 0x37d1a8u;
    // NOP
    // 0x37d1ac: 0x0  nop
    ctx->pc = 0x37d1acu;
    // NOP
    ctx->pc = 0x37d1b0u;
}
