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

// Function: sub_003DA4E8
// Address: 0x3da4e8 - 0x3da5b8
void sub_003DA4E8_0x3da4e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DA4E8_0x3da4e8");
#endif

    switch (ctx->pc) {
        case 0x3da528u: goto label_3da528;
        case 0x3da554u: goto label_3da554;
        case 0x3da56cu: goto label_3da56c;
        default: break;
    }

    ctx->pc = 0x3da4e8u;

    // 0x3da4e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3da4e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3da4ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3da4ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3da4f0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3da4f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3da4f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3da4f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3da4f8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3da4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3da4fc: 0x30d1ffff  andi        $s1, $a2, 0xFFFF
    ctx->pc = 0x3da4fcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x3da500: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x3da500u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3da504: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3da504u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3da508: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3da508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3da50c: 0x96030010  lhu         $v1, 0x10($s0)
    ctx->pc = 0x3da50cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3da510: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x3da510u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3da514: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3DA514u;
    {
        const bool branch_taken_0x3da514 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3DA518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA514u;
        // 0x3da518: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da514) {
            ctx->pc = 0x3DA530u;
            goto label_3da530;
        }
    }
    ctx->pc = 0x3DA51Cu;
    // 0x3da51c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x3da51cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3da520: 0xc0f68d2  jal         func_3DA348
    ctx->pc = 0x3DA520u;
    SET_GPR_U32(ctx, 31, 0x3DA528u);
    ctx->pc = 0x3DA524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA520u;
    // 0x3da524: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DA348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DA348u, 0x3DA520u, 0x3DA528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA528u;
label_3da528:
    // 0x3da528: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3DA528u;
    {
        const bool branch_taken_0x3da528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA528u;
        // 0x3da52c: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da528) {
            ctx->pc = 0x3DA570u;
            goto label_3da570;
        }
    }
    ctx->pc = 0x3DA530u;
label_3da530:
    // 0x3da530: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3da530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3da534: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3DA534u;
    {
        const bool branch_taken_0x3da534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA534u;
        // 0x3da538: 0x2622ffff  addiu       $v0, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da534) {
            ctx->pc = 0x3DA55Cu;
            goto label_3da55c;
        }
    }
    ctx->pc = 0x3DA53Cu;
    // 0x3da53c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3da53cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3da540: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3da540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3da544: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3da544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3da548: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x3da548u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3da54c: 0xc0f6910  jal         func_3DA440
    ctx->pc = 0x3DA54Cu;
    SET_GPR_U32(ctx, 31, 0x3DA554u);
    ctx->pc = 0x3DA550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA54Cu;
    // 0x3da550: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DA440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DA440u, 0x3DA54Cu, 0x3DA554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA554u;
label_3da554:
    // 0x3da554: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3DA554u;
    {
        const bool branch_taken_0x3da554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DA558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA554u;
        // 0x3da558: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da554) {
            ctx->pc = 0x3DA570u;
            goto label_3da570;
        }
    }
    ctx->pc = 0x3DA55Cu;
label_3da55c:
    // 0x3da55c: 0x96060010  lhu         $a2, 0x10($s0)
    ctx->pc = 0x3da55cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3da560: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3da560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3da564: 0xc0f68d2  jal         func_3DA348
    ctx->pc = 0x3DA564u;
    SET_GPR_U32(ctx, 31, 0x3DA56Cu);
    ctx->pc = 0x3DA568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DA564u;
    // 0x3da568: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DA348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DA348u, 0x3DA564u, 0x3DA56Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DA56Cu;
label_3da56c:
    // 0x3da56c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x3da56cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3da570:
    // 0x3da570: 0x1118c0  sll         $v1, $s1, 3
    ctx->pc = 0x3da570u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x3da574: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3da574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3da578: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x3da578u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x3da57c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x3da57cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3da580: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3da580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3da584: 0xac720004  sw          $s2, 0x4($v1)
    ctx->pc = 0x3da584u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 18));
    // 0x3da588: 0x96030010  lhu         $v1, 0x10($s0)
    ctx->pc = 0x3da588u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3da58c: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x3da58cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3da590: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3DA590u;
    {
        const bool branch_taken_0x3da590 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3DA594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA590u;
        // 0x3da594: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3da590) {
            ctx->pc = 0x3DA59Cu;
            goto label_3da59c;
        }
    }
    ctx->pc = 0x3DA598u;
    // 0x3da598: 0xa6020010  sh          $v0, 0x10($s0)
    ctx->pc = 0x3da598u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 16), (uint16_t)GPR_U32(ctx, 2));
label_3da59c:
    // 0x3da59c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3da59cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3da5a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3da5a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3da5a4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3da5a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3da5a8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3da5a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3da5ac: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x3da5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3da5b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3DA5B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DA5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DA5B0u;
        // 0x3da5b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DA5B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DA5B8u;
}
