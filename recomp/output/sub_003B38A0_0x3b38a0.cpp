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

// Function: sub_003B38A0
// Address: 0x3b38a0 - 0x3b39a0
void sub_003B38A0_0x3b38a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B38A0_0x3b38a0");
#endif

    switch (ctx->pc) {
        case 0x3b38d8u: goto label_3b38d8;
        case 0x3b3930u: goto label_3b3930;
        case 0x3b395cu: goto label_3b395c;
        case 0x3b3980u: goto label_3b3980;
        default: break;
    }

    ctx->pc = 0x3b38a0u;

    // 0x3b38a0: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3b38a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x3b38a4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b38a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3b38a8: 0x244268c8  addiu       $v0, $v0, 0x68C8
    ctx->pc = 0x3b38a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26824));
    // 0x3b38ac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3b38acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3b38b0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3b38b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3b38b4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x3b38b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b38b8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3b38b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b38bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3b38bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b38c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b38c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b38c4: 0x24060168  addiu       $a2, $zero, 0x168
    ctx->pc = 0x3b38c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    // 0x3b38c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3b38c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3b38cc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3b38ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3b38d0: 0xc0efa24  jal         func_3BE890
    ctx->pc = 0x3B38D0u;
    SET_GPR_U32(ctx, 31, 0x3B38D8u);
    ctx->pc = 0x3B38D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B38D0u;
    // 0x3b38d4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE890u, 0x3B38D0u, 0x3B38D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B38D8u;
label_3b38d8:
    // 0x3b38d8: 0x56400005  bnel        $s2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B38D8u;
    {
        const bool branch_taken_0x3b38d8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b38d8) {
            ctx->pc = 0x3B38DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B38D8u;
            // 0x3b38dc: 0x2a620400  slti        $v0, $s3, 0x400 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)1024) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B38F0u;
            goto label_3b38f0;
        }
    }
    ctx->pc = 0x3B38E0u;
    // 0x3b38e0: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3b38e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3b38e4: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x3B38E4u;
    {
        const bool branch_taken_0x3b38e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B38E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B38E4u;
        // 0x3b38e8: 0x248404d0  addiu       $a0, $a0, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b38e4) {
            ctx->pc = 0x3B3978u;
            goto label_3b3978;
        }
    }
    ctx->pc = 0x3B38ECu;
    // 0x3b38ec: 0x0  nop
    ctx->pc = 0x3b38ecu;
    // NOP
label_3b38f0:
    // 0x3b38f0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B38F0u;
    {
        const bool branch_taken_0x3b38f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b38f0) {
            ctx->pc = 0x3B38F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B38F0u;
            // 0x3b38f4: 0x32420003  andi        $v0, $s2, 0x3 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B3908u;
            goto label_3b3908;
        }
    }
    ctx->pc = 0x3B38F8u;
    // 0x3b38f8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3b38f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3b38fc: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x3B38FCu;
    {
        const bool branch_taken_0x3b38fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B38FCu;
        // 0x3b3900: 0x248404f8  addiu       $a0, $a0, 0x4F8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b38fc) {
            ctx->pc = 0x3B3978u;
            goto label_3b3978;
        }
    }
    ctx->pc = 0x3B3904u;
    // 0x3b3904: 0x0  nop
    ctx->pc = 0x3b3904u;
    // NOP
label_3b3908:
    // 0x3b3908: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B3908u;
    {
        const bool branch_taken_0x3b3908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B390Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3908u;
        // 0x3b390c: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3908) {
            ctx->pc = 0x3B3918u;
            goto label_3b3918;
        }
    }
    ctx->pc = 0x3B3910u;
    // 0x3b3910: 0x2421023  subu        $v0, $s2, $v0
    ctx->pc = 0x3b3910u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x3b3914: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x3b3914u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_3b3918:
    // 0x3b3918: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x3b3918u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b391c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3b391cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3920: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3b3920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3924: 0x2406002c  addiu       $a2, $zero, 0x2C
    ctx->pc = 0x3b3924u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x3b3928: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x3B3928u;
    SET_GPR_U32(ctx, 31, 0x3B3930u);
    ctx->pc = 0x3B392Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3928u;
    // 0x3b392c: 0x2630002c  addiu       $s0, $s1, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x3B3928u, 0x3B3930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3930u;
label_3b3930:
    // 0x3b3930: 0x32020003  andi        $v0, $s0, 0x3
    ctx->pc = 0x3b3930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)3);
    // 0x3b3934: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x3b3934u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
    // 0x3b3938: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B3938u;
    {
        const bool branch_taken_0x3b3938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B393Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3938u;
        // 0x3b393c: 0xae330004  sw          $s3, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3938) {
            ctx->pc = 0x3B3948u;
            goto label_3b3948;
        }
    }
    ctx->pc = 0x3B3940u;
    // 0x3b3940: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x3b3940u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3b3944: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x3b3944u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_3b3948:
    // 0x3b3948: 0x26020180  addiu       $v0, $s0, 0x180
    ctx->pc = 0x3b3948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    // 0x3b394c: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x3b394cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
    // 0x3b3950: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x3b3950u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x3b3954: 0xc0ece88  jal         func_3B3A20
    ctx->pc = 0x3B3954u;
    SET_GPR_U32(ctx, 31, 0x3B395Cu);
    ctx->pc = 0x3B3958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B3954u;
    // 0x3b3958: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3A20u, 0x3B3954u, 0x3B395Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B395Cu;
label_3b395c:
    // 0x3b395c: 0x26030300  addiu       $v1, $s0, 0x300
    ctx->pc = 0x3b395cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
    // 0x3b3960: 0x2531021  addu        $v0, $s2, $s3
    ctx->pc = 0x3b3960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x3b3964: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x3b3964u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3b3968: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B3968u;
    {
        const bool branch_taken_0x3b3968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b3968) {
            ctx->pc = 0x3B396Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B3968u;
            // 0x3b396c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B3984u;
            goto label_3b3984;
        }
    }
    ctx->pc = 0x3B3970u;
    // 0x3b3970: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3b3970u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3b3974: 0x24840520  addiu       $a0, $a0, 0x520
    ctx->pc = 0x3b3974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1312));
label_3b3978:
    // 0x3b3978: 0xc0ecddc  jal         func_3B3770
    ctx->pc = 0x3B3978u;
    SET_GPR_U32(ctx, 31, 0x3B3980u);
    ctx->pc = 0x3B3770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3770u, 0x3B3978u, 0x3B3980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3980u;
label_3b3980:
    // 0x3b3980: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3b3980u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b3984:
    // 0x3b3984: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b3984u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b3988: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3b3988u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3b398c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3b398cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b3990: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3b3990u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3b3994: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3b3994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b3998: 0x3e00008  jr          $ra
    ctx->pc = 0x3B3998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B399Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3998u;
        // 0x3b399c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B3998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B39A0u;
}
