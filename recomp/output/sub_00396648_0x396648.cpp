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

// Function: sub_00396648
// Address: 0x396648 - 0x396740
void sub_00396648_0x396648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00396648_0x396648");
#endif

    switch (ctx->pc) {
        case 0x3966d8u: goto label_3966d8;
        case 0x3966ecu: goto label_3966ec;
        case 0x3966f8u: goto label_3966f8;
        default: break;
    }

    ctx->pc = 0x396648u;

    // 0x396648: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x396648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x39664c: 0x3c077fff  lui         $a3, 0x7FFF
    ctx->pc = 0x39664cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32767 << 16));
    // 0x396650: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x396650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x396654: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x396654u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396658: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x396658u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x39665c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39665cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x396660: 0x80e599c  j           func_396670
    ctx->pc = 0x396660u;
    ctx->pc = 0x396664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396660u;
    // 0x396664: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x396670u;
    goto label_396670;
    ctx->pc = 0x396668u;
    // 0x396668: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x396668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x39666c: 0x0  nop
    ctx->pc = 0x39666cu;
    // NOP
label_396670:
    // 0x396670: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x396670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x396674: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x396674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x396678: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x396678u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39667c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x39667cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x396680: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x396680u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396684: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x396684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x396688: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x396688u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39668c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x39668cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x396690: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x396690u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x396694: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x396694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x396698: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x396698u;
    {
        const bool branch_taken_0x396698 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x39669Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x396698u;
        // 0x39669c: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x396698) {
            ctx->pc = 0x3966A8u;
            goto label_3966a8;
        }
    }
    ctx->pc = 0x3966A0u;
    // 0x3966a0: 0x5640000b  bnel        $s2, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x3966A0u;
    {
        const bool branch_taken_0x3966a0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x3966a0) {
            ctx->pc = 0x3966A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3966A0u;
            // 0x3966a4: 0x8e300094  lw          $s0, 0x94($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3966D0u;
            goto label_3966d0;
        }
    }
    ctx->pc = 0x3966A8u;
label_3966a8:
    // 0x3966a8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3966a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3966ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3966acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3966b0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3966b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3966b4: 0x2484af20  addiu       $a0, $a0, -0x50E0
    ctx->pc = 0x3966b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946592));
    // 0x3966b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3966b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3966bc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3966bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3966c0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3966c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3966c4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x3966c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3966c8: 0x80ec0fe  j           func_3B03F8
    ctx->pc = 0x3966C8u;
    ctx->pc = 0x3966CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3966C8u;
    // 0x3966cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B03F8u;
    sub_003B03F8_0x3b03f8(rdram, ctx, runtime); return;
    ctx->pc = 0x3966D0u;
label_3966d0:
    // 0x3966d0: 0xc0e9c5e  jal         func_3A7178
    ctx->pc = 0x3966D0u;
    SET_GPR_U32(ctx, 31, 0x3966D8u);
    ctx->pc = 0x3966D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3966D0u;
    // 0x3966d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7178u, 0x3966D0u, 0x3966D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3966D8u;
label_3966d8:
    // 0x3966d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3966d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3966dc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3966dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3966e0: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3966e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3966e4: 0xc0e58cc  jal         func_396330
    ctx->pc = 0x3966E4u;
    SET_GPR_U32(ctx, 31, 0x3966ECu);
    ctx->pc = 0x3966E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3966E4u;
    // 0x3966e8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x396330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x396330u, 0x3966E4u, 0x3966ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3966ECu;
label_3966ec:
    // 0x3966ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3966ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3966f0: 0xc0e9d0a  jal         func_3A7428
    ctx->pc = 0x3966F0u;
    SET_GPR_U32(ctx, 31, 0x3966F8u);
    ctx->pc = 0x3966F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3966F0u;
    // 0x3966f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7428u, 0x3966F0u, 0x3966F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3966F8u;
label_3966f8:
    // 0x3966f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3966f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3966fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3966fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x396700: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x396700u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x396704: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x396704u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x396708: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x396708u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x39670c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x39670cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x396710: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x396710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x396714: 0x80e593a  j           func_3964E8
    ctx->pc = 0x396714u;
    ctx->pc = 0x396718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x396714u;
    // 0x396718: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3964E8u;
    sub_003964E8_0x3964e8(rdram, ctx, runtime); return;
    ctx->pc = 0x39671Cu;
    // 0x39671c: 0x0  nop
    ctx->pc = 0x39671cu;
    // NOP
    // 0x396720: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x396720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x396724: 0x0  nop
    ctx->pc = 0x396724u;
    // NOP
    // 0x396728: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x396728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x39672c: 0x0  nop
    ctx->pc = 0x39672cu;
    // NOP
    // 0x396730: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x396730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x396734: 0x0  nop
    ctx->pc = 0x396734u;
    // NOP
    // 0x396738: 0xad27000c  sw          $a3, 0xC($t1)
    ctx->pc = 0x396738u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 7));
    // 0x39673c: 0x0  nop
    ctx->pc = 0x39673cu;
    // NOP
    ctx->pc = 0x396740u;
}
