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

// Function: sub_0030A538
// Address: 0x30a538 - 0x30a5e8
void sub_0030A538_0x30a538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030A538_0x30a538");
#endif

    switch (ctx->pc) {
        case 0x30a550u: goto label_30a550;
        case 0x30a55cu: goto label_30a55c;
        case 0x30a59cu: goto label_30a59c;
        case 0x30a5a4u: goto label_30a5a4;
        case 0x30a5acu: goto label_30a5ac;
        case 0x30a5b4u: goto label_30a5b4;
        case 0x30a5bcu: goto label_30a5bc;
        case 0x30a5c4u: goto label_30a5c4;
        case 0x30a5ccu: goto label_30a5cc;
        default: break;
    }

    ctx->pc = 0x30a538u;

    // 0x30a538: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30a538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30a53c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30a53cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x30a540: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x30a540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x30a544: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30a544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30a548: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x30A548u;
    SET_GPR_U32(ctx, 31, 0x30A550u);
    ctx->pc = 0x30A54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A548u;
    // 0x30a54c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x30A548u, 0x30A550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A550u;
label_30a550:
    // 0x30a550: 0x26110040  addiu       $s1, $s0, 0x40
    ctx->pc = 0x30a550u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x30a554: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x30A554u;
    SET_GPR_U32(ctx, 31, 0x30A55Cu);
    ctx->pc = 0x30A558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A554u;
    // 0x30a558: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x30A554u, 0x30A55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A55Cu;
label_30a55c:
    // 0x30a55c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x30a55cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x30a560: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30a560u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30a564: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x30a564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x30a568: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x30a568u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
    // 0x30a56c: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x30a56cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
    // 0x30a570: 0xae0000e8  sw          $zero, 0xE8($s0)
    ctx->pc = 0x30a570u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 0));
    // 0x30a574: 0xae0000ec  sw          $zero, 0xEC($s0)
    ctx->pc = 0x30a574u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 0));
    // 0x30a578: 0xae0000f0  sw          $zero, 0xF0($s0)
    ctx->pc = 0x30a578u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 0));
    // 0x30a57c: 0xae0000f4  sw          $zero, 0xF4($s0)
    ctx->pc = 0x30a57cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 244), GPR_U32(ctx, 0));
    // 0x30a580: 0xae0000f8  sw          $zero, 0xF8($s0)
    ctx->pc = 0x30a580u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 0));
    // 0x30a584: 0xae0000fc  sw          $zero, 0xFC($s0)
    ctx->pc = 0x30a584u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 0));
    // 0x30a588: 0xae000100  sw          $zero, 0x100($s0)
    ctx->pc = 0x30a588u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
    // 0x30a58c: 0xae000108  sw          $zero, 0x108($s0)
    ctx->pc = 0x30a58cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 0));
    // 0x30a590: 0xae00010c  sw          $zero, 0x10C($s0)
    ctx->pc = 0x30a590u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 0));
    // 0x30a594: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x30A594u;
    SET_GPR_U32(ctx, 31, 0x30A59Cu);
    ctx->pc = 0x30A598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A594u;
    // 0x30a598: 0xe6000104  swc1        $f0, 0x104($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x30A594u, 0x30A59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A59Cu;
label_30a59c:
    // 0x30a59c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x30A59Cu;
    SET_GPR_U32(ctx, 31, 0x30A5A4u);
    ctx->pc = 0x30A5A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A59Cu;
    // 0x30a5a0: 0x26040160  addiu       $a0, $s0, 0x160 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x30A59Cu, 0x30A5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A5A4u;
label_30a5a4:
    // 0x30a5a4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x30A5A4u;
    SET_GPR_U32(ctx, 31, 0x30A5ACu);
    ctx->pc = 0x30A5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A5A4u;
    // 0x30a5a8: 0x26040170  addiu       $a0, $s0, 0x170 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x30A5A4u, 0x30A5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A5ACu;
label_30a5ac:
    // 0x30a5ac: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x30A5ACu;
    SET_GPR_U32(ctx, 31, 0x30A5B4u);
    ctx->pc = 0x30A5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A5ACu;
    // 0x30a5b0: 0x26040180  addiu       $a0, $s0, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x30A5ACu, 0x30A5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A5B4u;
label_30a5b4:
    // 0x30a5b4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x30A5B4u;
    SET_GPR_U32(ctx, 31, 0x30A5BCu);
    ctx->pc = 0x30A5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A5B4u;
    // 0x30a5b8: 0x26040190  addiu       $a0, $s0, 0x190 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x30A5B4u, 0x30A5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A5BCu;
label_30a5bc:
    // 0x30a5bc: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x30A5BCu;
    SET_GPR_U32(ctx, 31, 0x30A5C4u);
    ctx->pc = 0x30A5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A5BCu;
    // 0x30a5c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x30A5BCu, 0x30A5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A5C4u;
label_30a5c4:
    // 0x30a5c4: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x30A5C4u;
    SET_GPR_U32(ctx, 31, 0x30A5CCu);
    ctx->pc = 0x30A5C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30A5C4u;
    // 0x30a5c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x30A5C4u, 0x30A5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30A5CCu;
label_30a5cc:
    // 0x30a5cc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x30a5ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30a5d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x30a5d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x30a5d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x30a5d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30a5d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30a5d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30a5dc: 0x3e00008  jr          $ra
    ctx->pc = 0x30A5DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30A5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30A5DCu;
        // 0x30a5e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30A5DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30A5E4u;
    // 0x30a5e4: 0x0  nop
    ctx->pc = 0x30a5e4u;
    // NOP
    ctx->pc = 0x30a5e8u;
}
