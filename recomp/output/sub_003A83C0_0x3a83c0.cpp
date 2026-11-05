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

// Function: sub_003A83C0
// Address: 0x3a83c0 - 0x3a84f8
void sub_003A83C0_0x3a83c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A83C0_0x3a83c0");
#endif

    switch (ctx->pc) {
        case 0x3a8420u: goto label_3a8420;
        case 0x3a8428u: goto label_3a8428;
        case 0x3a8438u: goto label_3a8438;
        case 0x3a8440u: goto label_3a8440;
        case 0x3a844cu: goto label_3a844c;
        case 0x3a8458u: goto label_3a8458;
        case 0x3a8494u: goto label_3a8494;
        default: break;
    }

    ctx->pc = 0x3a83c0u;

    // 0x3a83c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a83c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3a83c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a83c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a83c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a83c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a83cc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3a83ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3a83d0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3a83d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a83d4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3a83d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3a83d8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3a83d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3a83dc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3a83dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3a83e0: 0x82020003  lb          $v0, 0x3($s0)
    ctx->pc = 0x3a83e0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x3a83e4: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x3a83e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x3a83e8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3A83E8u;
    {
        const bool branch_taken_0x3a83e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A83ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A83E8u;
        // 0x3a83ec: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a83e8) {
            ctx->pc = 0x3A8418u;
            goto label_3a8418;
        }
    }
    ctx->pc = 0x3A83F0u;
    // 0x3a83f0: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3a83f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3a83f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a83f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a83f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a83f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a83fc: 0x2484e700  addiu       $a0, $a0, -0x1900
    ctx->pc = 0x3a83fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960896));
    // 0x3a8400: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3a8400u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a8404: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3a8404u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3a8408: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3a8408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a840c: 0x80ec0fe  j           func_3B03F8
    ctx->pc = 0x3A840Cu;
    ctx->pc = 0x3A8410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A840Cu;
    // 0x3a8410: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B03F8u;
    sub_003B03F8_0x3b03f8(rdram, ctx, runtime); return;
    ctx->pc = 0x3A8414u;
    // 0x3a8414: 0x0  nop
    ctx->pc = 0x3a8414u;
    // NOP
label_3a8418:
    // 0x3a8418: 0xc0e6e04  jal         func_39B810
    ctx->pc = 0x3A8418u;
    SET_GPR_U32(ctx, 31, 0x3A8420u);
    ctx->pc = 0x39B810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39B810u, 0x3A8418u, 0x3A8420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8420u;
label_3a8420:
    // 0x3a8420: 0xc0ea13e  jal         func_3A84F8
    ctx->pc = 0x3A8420u;
    SET_GPR_U32(ctx, 31, 0x3A8428u);
    ctx->pc = 0x3A8424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8420u;
    // 0x3a8424: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84F8u, 0x3A8420u, 0x3A8428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8428u;
label_3a8428:
    // 0x3a8428: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x3a8428u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x3a842c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a842cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8430: 0xc0ecdc6  jal         func_3B3718
    ctx->pc = 0x3A8430u;
    SET_GPR_U32(ctx, 31, 0x3A8438u);
    ctx->pc = 0x3A8434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8430u;
    // 0x3a8434: 0x248485e0  addiu       $a0, $a0, -0x7A20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3718u, 0x3A8430u, 0x3A8438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8438u;
label_3a8438:
    // 0x3a8438: 0xc0ecde8  jal         func_3B37A0
    ctx->pc = 0x3A8438u;
    SET_GPR_U32(ctx, 31, 0x3A8440u);
    ctx->pc = 0x3A843Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8438u;
    // 0x3a843c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B37A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B37A0u, 0x3A8438u, 0x3A8440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8440u;
label_3a8440:
    // 0x3a8440: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3a8440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3a8444: 0xc0e5de6  jal         func_397798
    ctx->pc = 0x3A8444u;
    SET_GPR_U32(ctx, 31, 0x3A844Cu);
    ctx->pc = 0x3A8448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8444u;
    // 0x3a8448: 0x8c510004  lw          $s1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397798u, 0x3A8444u, 0x3A844Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A844Cu;
label_3a844c:
    // 0x3a844c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3a844cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a8450: 0xc0ece16  jal         func_3B3858
    ctx->pc = 0x3A8450u;
    SET_GPR_U32(ctx, 31, 0x3A8458u);
    ctx->pc = 0x3A8454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8450u;
    // 0x3a8454: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3858u, 0x3A8450u, 0x3A8458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8458u;
label_3a8458:
    // 0x3a8458: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3a8458u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a845c: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x3A845Cu;
    {
        const bool branch_taken_0x3a845c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A8460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A845Cu;
        // 0x3a8460: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a845c) {
            ctx->pc = 0x3A8488u;
            goto label_3a8488;
        }
    }
    ctx->pc = 0x3A8464u;
    // 0x3a8464: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3a8464u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3a8468: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a8468u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a846c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a846cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a8470: 0x2484e740  addiu       $a0, $a0, -0x18C0
    ctx->pc = 0x3a8470u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960960));
    // 0x3a8474: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3a8474u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a8478: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3a8478u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3a847c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3a847cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a8480: 0x80ec0fe  j           func_3B03F8
    ctx->pc = 0x3A8480u;
    ctx->pc = 0x3A8484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A8480u;
    // 0x3a8484: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B03F8u;
    sub_003B03F8_0x3b03f8(rdram, ctx, runtime); return;
    ctx->pc = 0x3A8488u;
label_3a8488:
    // 0x3a8488: 0x8e2500ec  lw          $a1, 0xEC($s1)
    ctx->pc = 0x3a8488u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 236)));
    // 0x3a848c: 0xc0ecf10  jal         func_3B3C40
    ctx->pc = 0x3A848Cu;
    SET_GPR_U32(ctx, 31, 0x3A8494u);
    ctx->pc = 0x3A8490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A848Cu;
    // 0x3a8490: 0x8e2600f0  lw          $a2, 0xF0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3C40u, 0x3A848Cu, 0x3A8494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A8494u;
label_3a8494:
    // 0x3a8494: 0xae3000e8  sw          $s0, 0xE8($s1)
    ctx->pc = 0x3a8494u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 16));
    // 0x3a8498: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x3a8498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x3a849c: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x3a849cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    // 0x3a84a0: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x3a84a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x3a84a4: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x3a84a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x3a84a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a84a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a84ac: 0x24428520  addiu       $v0, $v0, -0x7AE0
    ctx->pc = 0x3a84acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935840));
    // 0x3a84b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a84b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a84b4: 0x246385a8  addiu       $v1, $v1, -0x7A58
    ctx->pc = 0x3a84b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935976));
    // 0x3a84b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3a84b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a84bc: 0x24848590  addiu       $a0, $a0, -0x7A70
    ctx->pc = 0x3a84bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935952));
    // 0x3a84c0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3a84c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3a84c4: 0x24a585c8  addiu       $a1, $a1, -0x7A38
    ctx->pc = 0x3a84c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936008));
    // 0x3a84c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3a84c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a84cc: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x3a84ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
    // 0x3a84d0: 0x3c070042  lui         $a3, 0x42
    ctx->pc = 0x3a84d0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)66 << 16));
    // 0x3a84d4: 0x3c080042  lui         $t0, 0x42
    ctx->pc = 0x3a84d4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)66 << 16));
    // 0x3a84d8: 0x3c090041  lui         $t1, 0x41
    ctx->pc = 0x3a84d8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65 << 16));
    // 0x3a84dc: 0xacc2ada4  sw          $v0, -0x525C($a2)
    ctx->pc = 0x3a84dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x40ADA4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x40ADA4u, _value); } while (0);
    // 0x3a84e0: 0xace3370c  sw          $v1, 0x370C($a3)
    ctx->pc = 0x3a84e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x42370Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x42370Cu, _value); } while (0);
    // 0x3a84e4: 0xad043710  sw          $a0, 0x3710($t0)
    ctx->pc = 0x3a84e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x423710u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x423710u, _value); } while (0);
    // 0x3a84e8: 0xad25921c  sw          $a1, -0x6DE4($t1)
    ctx->pc = 0x3a84e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x40921Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x40921Cu, _value); } while (0);
    // 0x3a84ec: 0x80e5dec  j           func_3977B0
    ctx->pc = 0x3A84ECu;
    ctx->pc = 0x3A84F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A84ECu;
    // 0x3a84f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3977B0u;
    sub_003977B0_0x3977b0(rdram, ctx, runtime); return;
    ctx->pc = 0x3A84F4u;
    // 0x3a84f4: 0x0  nop
    ctx->pc = 0x3a84f4u;
    // NOP
    ctx->pc = 0x3a84f8u;
}
