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

// Function: sub_002B6898
// Address: 0x2b6898 - 0x2b69a0
void sub_002B6898_0x2b6898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B6898_0x2b6898");
#endif

    switch (ctx->pc) {
        case 0x2b6910u: goto label_2b6910;
        case 0x2b6948u: goto label_2b6948;
        case 0x2b6970u: goto label_2b6970;
        case 0x2b6978u: goto label_2b6978;
        default: break;
    }

    ctx->pc = 0x2b6898u;

    // 0x2b6898: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b6898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b689c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b689cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b68a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b68a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b68a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b68a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b68a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b68a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b68ac: 0x8e035900  lw          $v1, 0x5900($s0)
    ctx->pc = 0x2b68acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 22784)));
    // 0x2b68b0: 0x28620033  slti        $v0, $v1, 0x33
    ctx->pc = 0x2b68b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)51) ? 1 : 0);
    // 0x2b68b4: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2B68B4u;
    {
        const bool branch_taken_0x2b68b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B68B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B68B4u;
        // 0x2b68b8: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b68b4) {
            ctx->pc = 0x2B6980u;
            goto label_2b6980;
        }
    }
    ctx->pc = 0x2B68BCu;
    // 0x2b68bc: 0x8e0358f8  lw          $v1, 0x58F8($s0)
    ctx->pc = 0x2b68bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 22776)));
    // 0x2b68c0: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x2b68c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b68c4: 0x10710005  beq         $v1, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B68C4u;
    {
        const bool branch_taken_0x2b68c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x2B68C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B68C4u;
        // 0x2b68c8: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b68c4) {
            ctx->pc = 0x2B68DCu;
            goto label_2b68dc;
        }
    }
    ctx->pc = 0x2B68CCu;
    // 0x2b68cc: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2B68CCu;
    {
        const bool branch_taken_0x2b68cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B68D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B68CCu;
        // 0x2b68d0: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b68cc) {
            ctx->pc = 0x2B6908u;
            goto label_2b6908;
        }
    }
    ctx->pc = 0x2B68D4u;
    // 0x2b68d4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2B68D4u;
    {
        const bool branch_taken_0x2b68d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B68D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B68D4u;
        // 0x2b68d8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b68d4) {
            ctx->pc = 0x2B6960u;
            goto label_2b6960;
        }
    }
    ctx->pc = 0x2B68DCu;
label_2b68dc:
    // 0x2b68dc: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x2b68dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x2b68e0: 0x24442508  addiu       $a0, $v0, 0x2508
    ctx->pc = 0x2b68e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 9480));
    // 0x2b68e4: 0x8c830094  lw          $v1, 0x94($a0)
    ctx->pc = 0x2b68e4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4C259Cu));
    // 0x2b68e8: 0x4600003  bltz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B68E8u;
    {
        const bool branch_taken_0x2b68e8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2B68ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B68E8u;
        // 0x2b68ec: 0x3c020005  lui         $v0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b68e8) {
            ctx->pc = 0x2B68F8u;
            goto label_2b68f8;
        }
    }
    ctx->pc = 0x2B68F0u;
    // 0x2b68f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B68F0u;
    {
        const bool branch_taken_0x2b68f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B68F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B68F0u;
        // 0x2b68f4: 0x8c8300e8  lw          $v1, 0xE8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 232)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b68f0) {
            ctx->pc = 0x2B68FCu;
            goto label_2b68fc;
        }
    }
    ctx->pc = 0x2B68F8u;
label_2b68f8:
    // 0x2b68f8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2b68f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2b68fc:
    // 0x2b68fc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2b68fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2b6900: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2B6900u;
    {
        const bool branch_taken_0x2b6900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6900u;
        // 0x2b6904: 0xac432e3c  sw          $v1, 0x2E3C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 11836), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6900) {
            ctx->pc = 0x2B6958u;
            goto label_2b6958;
        }
    }
    ctx->pc = 0x2B6908u;
label_2b6908:
    // 0x2b6908: 0xc0addea  jal         func_2B77A8
    ctx->pc = 0x2B6908u;
    SET_GPR_U32(ctx, 31, 0x2B6910u);
    ctx->pc = 0x2B690Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6908u;
    // 0x2b690c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B77A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B77A8u, 0x2B6908u, 0x2B6910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6910u;
label_2b6910:
    // 0x2b6910: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b6910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6914: 0x14b10011  bne         $a1, $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2B6914u;
    {
        const bool branch_taken_0x2b6914 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 17));
        ctx->pc = 0x2B6918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6914u;
        // 0x2b6918: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6914) {
            ctx->pc = 0x2B695Cu;
            goto label_2b695c;
        }
    }
    ctx->pc = 0x2B691Cu;
    // 0x2b691c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2b691cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2b6920: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x2b6920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2b6924: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2B6924u;
    {
        const bool branch_taken_0x2b6924 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B6928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6924u;
        // 0x2b6928: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6924) {
            ctx->pc = 0x2B695Cu;
            goto label_2b695c;
        }
    }
    ctx->pc = 0x2B692Cu;
    // 0x2b692c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2b692cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2b6930: 0x3c040052  lui         $a0, 0x52
    ctx->pc = 0x2b6930u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)82 << 16));
    // 0x2b6934: 0xa045a931  sb          $a1, -0x56CF($v0)
    ctx->pc = 0x2b6934u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x3FA931u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3FA931u, _value); } while (0);
    // 0x2b6938: 0x2484ac80  addiu       $a0, $a0, -0x5380
    ctx->pc = 0x2b6938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945920));
    // 0x2b693c: 0x24050025  addiu       $a1, $zero, 0x25
    ctx->pc = 0x2b693cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x2b6940: 0xc0ad6cc  jal         func_2B5B30
    ctx->pc = 0x2B6940u;
    SET_GPR_U32(ctx, 31, 0x2B6948u);
    ctx->pc = 0x2B6944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6940u;
    // 0x2b6944: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5B30u, 0x2B6940u, 0x2B6948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6948u;
label_2b6948:
    // 0x2b6948: 0x24030026  addiu       $v1, $zero, 0x26
    ctx->pc = 0x2b6948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x2b694c: 0x24020026  addiu       $v0, $zero, 0x26
    ctx->pc = 0x2b694cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x2b6950: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2B6950u;
    {
        const bool branch_taken_0x2b6950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6950u;
        // 0x2b6954: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6950) {
            ctx->pc = 0x2B6988u;
            goto label_2b6988;
        }
    }
    ctx->pc = 0x2B6958u;
label_2b6958:
    // 0x2b6958: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2b6958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2b695c:
    // 0x2b695c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b695cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b6960:
    // 0x2b6960: 0xac40a448  sw          $zero, -0x5BB8($v0)
    ctx->pc = 0x2b6960u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294943816), GPR_U32(ctx, 0));
    // 0x2b6964: 0xae0358fc  sw          $v1, 0x58FC($s0)
    ctx->pc = 0x2b6964u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 22780), GPR_U32(ctx, 3));
    // 0x2b6968: 0xc0abb96  jal         func_2AEE58
    ctx->pc = 0x2B6968u;
    SET_GPR_U32(ctx, 31, 0x2B6970u);
    ctx->pc = 0x2B696Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6968u;
    // 0x2b696c: 0xae035914  sw          $v1, 0x5914($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 22804), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AEE58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AEE58u, 0x2B6968u, 0x2B6970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6970u;
label_2b6970:
    // 0x2b6970: 0xc0ad6ae  jal         func_2B5AB8
    ctx->pc = 0x2B6970u;
    SET_GPR_U32(ctx, 31, 0x2B6978u);
    ctx->pc = 0x2B6974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6970u;
    // 0x2b6974: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5AB8u, 0x2B6970u, 0x2B6978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6978u;
label_2b6978:
    // 0x2b6978: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2B6978u;
    {
        const bool branch_taken_0x2b6978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B697Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6978u;
        // 0x2b697c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6978) {
            ctx->pc = 0x2B698Cu;
            goto label_2b698c;
        }
    }
    ctx->pc = 0x2B6980u;
label_2b6980:
    // 0x2b6980: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b6980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b6984: 0xae035900  sw          $v1, 0x5900($s0)
    ctx->pc = 0x2b6984u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 22784), GPR_U32(ctx, 3));
label_2b6988:
    // 0x2b6988: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b6988u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b698c:
    // 0x2b698c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b698cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6990: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b6990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6994: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B6998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6994u;
        // 0x2b6998: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B699Cu;
    // 0x2b699c: 0x0  nop
    ctx->pc = 0x2b699cu;
    // NOP
    ctx->pc = 0x2b69a0u;
}
