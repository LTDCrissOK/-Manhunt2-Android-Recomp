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

// Function: sub_00368900
// Address: 0x368900 - 0x3689f0
void sub_00368900_0x368900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00368900_0x368900");
#endif

    switch (ctx->pc) {
        case 0x36895cu: goto label_36895c;
        case 0x368968u: goto label_368968;
        case 0x368970u: goto label_368970;
        case 0x3689a8u: goto label_3689a8;
        case 0x3689b0u: goto label_3689b0;
        case 0x3689c0u: goto label_3689c0;
        default: break;
    }

    ctx->pc = 0x368900u;

    // 0x368900: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x368900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x368904: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x368904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x368908: 0xffb10108  sd          $s1, 0x108($sp)
    ctx->pc = 0x368908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 17));
    // 0x36890c: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x36890cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x368910: 0xffb30118  sd          $s3, 0x118($sp)
    ctx->pc = 0x368910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 19));
    // 0x368914: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x368914u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368918: 0xffb40120  sd          $s4, 0x120($sp)
    ctx->pc = 0x368918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 20));
    // 0x36891c: 0x3c130040  lui         $s3, 0x40
    ctx->pc = 0x36891cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)64 << 16));
    // 0x368920: 0xffb60130  sd          $s6, 0x130($sp)
    ctx->pc = 0x368920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 22));
    // 0x368924: 0x3c140047  lui         $s4, 0x47
    ctx->pc = 0x368924u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)71 << 16));
    // 0x368928: 0x8c459e40  lw          $a1, -0x61C0($v0)
    ctx->pc = 0x368928u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3F9E40u));
    // 0x36892c: 0x2476ec20  addiu       $s6, $v1, -0x13E0
    ctx->pc = 0x36892cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962208));
    // 0x368930: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x368930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x368934: 0xffb20110  sd          $s2, 0x110($sp)
    ctx->pc = 0x368934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 18));
    // 0x368938: 0xffb50128  sd          $s5, 0x128($sp)
    ctx->pc = 0x368938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 21));
    // 0x36893c: 0x14a00013  bnez        $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x36893Cu;
    {
        const bool branch_taken_0x36893c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x368940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36893Cu;
        // 0x368940: 0xffbf0138  sd          $ra, 0x138($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36893c) {
            ctx->pc = 0x36898Cu;
            goto label_36898c;
        }
    }
    ctx->pc = 0x368944u;
    // 0x368944: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x368944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x368948: 0x9043cbb0  lbu         $v1, -0x3450($v0)
    ctx->pc = 0x368948u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3FCBB0u));
    // 0x36894c: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x36894Cu;
    {
        const bool branch_taken_0x36894c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x368950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36894Cu;
        // 0x368950: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36894c) {
            ctx->pc = 0x36898Cu;
            goto label_36898c;
        }
    }
    ctx->pc = 0x368954u;
    // 0x368954: 0xc0f3dde  jal         func_3CF778
    ctx->pc = 0x368954u;
    SET_GPR_U32(ctx, 31, 0x36895Cu);
    ctx->pc = 0x368958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368954u;
    // 0x368958: 0x2412001e  addiu       $s2, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CF778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CF778u, 0x368954u, 0x36895Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36895Cu;
label_36895c:
    // 0x36895c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x36895cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368960: 0x24500001  addiu       $s0, $v0, 0x1
    ctx->pc = 0x368960u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x368964: 0x0  nop
    ctx->pc = 0x368964u;
    // NOP
label_368968:
    // 0x368968: 0xc0ee156  jal         func_3B8558
    ctx->pc = 0x368968u;
    SET_GPR_U32(ctx, 31, 0x368970u);
    ctx->pc = 0x36896Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x368968u;
    // 0x36896c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B8558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B8558u, 0x368968u, 0x368970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x368970u;
label_368970:
    // 0x368970: 0x0  nop
    ctx->pc = 0x368970u;
    // NOP
    // 0x368974: 0x0  nop
    ctx->pc = 0x368974u;
    // NOP
    // 0x368978: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x368978u;
    {
        const bool branch_taken_0x368978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36897Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368978u;
        // 0x36897c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368978) {
            ctx->pc = 0x368968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_368968;
        }
    }
    ctx->pc = 0x368980u;
    // 0x368980: 0x1452fff9  bne         $v0, $s2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x368980u;
    {
        const bool branch_taken_0x368980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x368984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x368980u;
        // 0x368984: 0x24500001  addiu       $s0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x368980) {
            ctx->pc = 0x368968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_368968;
        }
    }
    ctx->pc = 0x368988u;
    // 0x368988: 0xa2a0cbb0  sb          $zero, -0x3450($s5)
    ctx->pc = 0x368988u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 4294953904), (uint8_t)GPR_U32(ctx, 0));
label_36898c:
    // 0x36898c: 0x8e68cbac  lw          $t0, -0x3454($s3)
    ctx->pc = 0x36898cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294953900)));
    // 0x368990: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x368990u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x368994: 0x8e290000  lw          $t1, 0x0($s1)
    ctx->pc = 0x368994u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x368998: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x368998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36899c: 0x26867978  addiu       $a2, $s4, 0x7978
    ctx->pc = 0x36899cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 31096));
    // 0x3689a0: 0xc0efed0  jal         func_3BFB40
    ctx->pc = 0x3689A0u;
    SET_GPR_U32(ctx, 31, 0x3689A8u);
    ctx->pc = 0x3689A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3689A0u;
    // 0x3689a4: 0x240500ff  addiu       $a1, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFB40u, 0x3689A0u, 0x3689A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3689A8u;
label_3689a8:
    // 0x3689a8: 0xc09dbf8  jal         func_276FE0
    ctx->pc = 0x3689A8u;
    SET_GPR_U32(ctx, 31, 0x3689B0u);
    ctx->pc = 0x3689ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3689A8u;
    // 0x3689ac: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276FE0u, 0x3689A8u, 0x3689B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3689B0u;
label_3689b0:
    // 0x3689b0: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x3689b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3689b4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3689b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3689b8: 0xc0f3f46  jal         func_3CFD18
    ctx->pc = 0x3689B8u;
    SET_GPR_U32(ctx, 31, 0x3689C0u);
    ctx->pc = 0x3689BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3689B8u;
    // 0x3689bc: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CFD18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CFD18u, 0x3689B8u, 0x3689C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3689C0u;
label_3689c0:
    // 0x3689c0: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x3689c0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x3689c4: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x3689c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x3689c8: 0xdfb10108  ld          $s1, 0x108($sp)
    ctx->pc = 0x3689c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x3689cc: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x3689ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x3689d0: 0xdfb20110  ld          $s2, 0x110($sp)
    ctx->pc = 0x3689d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x3689d4: 0xdfb30118  ld          $s3, 0x118($sp)
    ctx->pc = 0x3689d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x3689d8: 0xdfb40120  ld          $s4, 0x120($sp)
    ctx->pc = 0x3689d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x3689dc: 0xdfb50128  ld          $s5, 0x128($sp)
    ctx->pc = 0x3689dcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x3689e0: 0xdfb60130  ld          $s6, 0x130($sp)
    ctx->pc = 0x3689e0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x3689e4: 0xdfbf0138  ld          $ra, 0x138($sp)
    ctx->pc = 0x3689e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x3689e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3689E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3689ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3689E8u;
        // 0x3689ec: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3689E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3689F0u;
}
