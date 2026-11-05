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

// Function: sub_002CB2F8
// Address: 0x2cb2f8 - 0x2cb440
void sub_002CB2F8_0x2cb2f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CB2F8_0x2cb2f8");
#endif

    switch (ctx->pc) {
        case 0x2cb384u: goto label_2cb384;
        case 0x2cb394u: goto label_2cb394;
        case 0x2cb3a8u: goto label_2cb3a8;
        case 0x2cb3c8u: goto label_2cb3c8;
        case 0x2cb3d8u: goto label_2cb3d8;
        case 0x2cb3ecu: goto label_2cb3ec;
        case 0x2cb400u: goto label_2cb400;
        case 0x2cb410u: goto label_2cb410;
        default: break;
    }

    ctx->pc = 0x2cb2f8u;

    // 0x2cb2f8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2cb2f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2cb2fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cb2fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cb300: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2cb300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2cb304: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x2cb304u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb308: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2cb308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2cb30c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2cb30cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb310: 0x160902d  daddu       $s2, $t3, $zero
    ctx->pc = 0x2cb310u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb314: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2cb314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2cb318: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2cb318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2cb31c: 0x2272821  addu        $a1, $s1, $a3
    ctx->pc = 0x2cb31cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 7)));
    // 0x2cb320: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2cb320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2cb324: 0x2121821  addu        $v1, $s0, $s2
    ctx->pc = 0x2cb324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x2cb328: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x2cb328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x2cb32c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2cb32cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb330: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2cb330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2cb334: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x2cb334u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb338: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2cb338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2cb33c: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x2cb33cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb340: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x2cb340u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2cb344: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CB344u;
    {
        const bool branch_taken_0x2cb344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB344u;
        // 0x2cb348: 0x140b02d  daddu       $s6, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb344) {
            ctx->pc = 0x2CB368u;
            goto label_2cb368;
        }
    }
    ctx->pc = 0x2CB34Cu;
    // 0x2cb34c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x2cb34cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2cb350: 0x72102a  slt         $v0, $v1, $s2
    ctx->pc = 0x2cb350u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2cb354: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CB354u;
    {
        const bool branch_taken_0x2cb354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cb354) {
            ctx->pc = 0x2CB358u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CB354u;
            // 0x2cb358: 0x2439023  subu        $s2, $s2, $v1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CB368u;
            goto label_2cb368;
        }
    }
    ctx->pc = 0x2CB35Cu;
    // 0x2cb35c: 0x721023  subu        $v0, $v1, $s2
    ctx->pc = 0x2cb35cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x2cb360: 0x2028023  subu        $s0, $s0, $v0
    ctx->pc = 0x2cb360u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2cb364: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2cb364u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cb368:
    // 0x2cb368: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x2cb368u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x2cb36c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2CB36Cu;
    {
        const bool branch_taken_0x2cb36c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CB370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB36Cu;
        // 0x2cb370: 0x2309823  subu        $s3, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb36c) {
            ctx->pc = 0x2CB3B0u;
            goto label_2cb3b0;
        }
    }
    ctx->pc = 0x2CB374u;
    // 0x2cb374: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2cb374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb378: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2cb378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb37c: 0xc0b2d10  jal         func_2CB440
    ctx->pc = 0x2CB37Cu;
    SET_GPR_U32(ctx, 31, 0x2CB384u);
    ctx->pc = 0x2CB380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB37Cu;
    // 0x2cb380: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB440u, 0x2CB37Cu, 0x2CB384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB384u;
label_2cb384:
    // 0x2cb384: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2cb384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb388: 0x2912821  addu        $a1, $s4, $s1
    ctx->pc = 0x2cb388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
    // 0x2cb38c: 0xc0b2d10  jal         func_2CB440
    ctx->pc = 0x2CB38Cu;
    SET_GPR_U32(ctx, 31, 0x2CB394u);
    ctx->pc = 0x2CB390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB38Cu;
    // 0x2cb390: 0x2113023  subu        $a2, $s0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB440u, 0x2CB38Cu, 0x2CB394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB394u;
label_2cb394:
    // 0x2cb394: 0x2f02021  addu        $a0, $s7, $s0
    ctx->pc = 0x2cb394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
    // 0x2cb398: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2cb398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb39c: 0x912023  subu        $a0, $a0, $s1
    ctx->pc = 0x2cb39cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x2cb3a0: 0xc0b2d10  jal         func_2CB440
    ctx->pc = 0x2CB3A0u;
    SET_GPR_U32(ctx, 31, 0x2CB3A8u);
    ctx->pc = 0x2CB3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB3A0u;
    // 0x2cb3a4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB440u, 0x2CB3A0u, 0x2CB3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB3A8u;
label_2cb3a8:
    // 0x2cb3a8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2CB3A8u;
    {
        const bool branch_taken_0x2cb3a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB3A8u;
        // 0x2cb3ac: 0x2121021  addu        $v0, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb3a8) {
            ctx->pc = 0x2CB414u;
            goto label_2cb414;
        }
    }
    ctx->pc = 0x2CB3B0u;
label_2cb3b0:
    // 0x2cb3b0: 0x253102a  slt         $v0, $s2, $s3
    ctx->pc = 0x2cb3b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x2cb3b4: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2CB3B4u;
    {
        const bool branch_taken_0x2cb3b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CB3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB3B4u;
        // 0x2cb3b8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb3b4) {
            ctx->pc = 0x2CB3F4u;
            goto label_2cb3f4;
        }
    }
    ctx->pc = 0x2CB3BCu;
    // 0x2cb3bc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2cb3bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb3c0: 0xc0b2d10  jal         func_2CB440
    ctx->pc = 0x2CB3C0u;
    SET_GPR_U32(ctx, 31, 0x2CB3C8u);
    ctx->pc = 0x2CB3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB3C0u;
    // 0x2cb3c4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB440u, 0x2CB3C0u, 0x2CB3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB3C8u;
label_2cb3c8:
    // 0x2cb3c8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2cb3c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb3cc: 0x2b02021  addu        $a0, $s5, $s0
    ctx->pc = 0x2cb3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x2cb3d0: 0xc0b2d10  jal         func_2CB440
    ctx->pc = 0x2CB3D0u;
    SET_GPR_U32(ctx, 31, 0x2CB3D8u);
    ctx->pc = 0x2CB3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB3D0u;
    // 0x2cb3d4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB440u, 0x2CB3D0u, 0x2CB3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB3D8u;
label_2cb3d8:
    // 0x2cb3d8: 0x2d12821  addu        $a1, $s6, $s1
    ctx->pc = 0x2cb3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x2cb3dc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2cb3dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb3e0: 0xb02823  subu        $a1, $a1, $s0
    ctx->pc = 0x2cb3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x2cb3e4: 0xc0b2d10  jal         func_2CB440
    ctx->pc = 0x2CB3E4u;
    SET_GPR_U32(ctx, 31, 0x2CB3ECu);
    ctx->pc = 0x2CB3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB3E4u;
    // 0x2cb3e8: 0x2533023  subu        $a2, $s2, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB440u, 0x2CB3E4u, 0x2CB3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB3ECu;
label_2cb3ec:
    // 0x2cb3ec: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2CB3ECu;
    {
        const bool branch_taken_0x2cb3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB3ECu;
        // 0x2cb3f0: 0x2121021  addu        $v0, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb3ec) {
            ctx->pc = 0x2CB414u;
            goto label_2cb414;
        }
    }
    ctx->pc = 0x2CB3F4u;
label_2cb3f4:
    // 0x2cb3f4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2cb3f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb3f8: 0xc0b2d10  jal         func_2CB440
    ctx->pc = 0x2CB3F8u;
    SET_GPR_U32(ctx, 31, 0x2CB400u);
    ctx->pc = 0x2CB3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB3F8u;
    // 0x2cb3fc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB440u, 0x2CB3F8u, 0x2CB400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB400u;
label_2cb400:
    // 0x2cb400: 0x2b02021  addu        $a0, $s5, $s0
    ctx->pc = 0x2cb400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x2cb404: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2cb404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb408: 0xc0b2d10  jal         func_2CB440
    ctx->pc = 0x2CB408u;
    SET_GPR_U32(ctx, 31, 0x2CB410u);
    ctx->pc = 0x2CB40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB408u;
    // 0x2cb40c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB440u, 0x2CB408u, 0x2CB410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB410u;
label_2cb410:
    // 0x2cb410: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x2cb410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_2cb414:
    // 0x2cb414: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2cb414u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cb418: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cb418u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cb41c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2cb41cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cb420: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2cb420u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cb424: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2cb424u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cb428: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2cb428u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2cb42c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2cb42cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cb430: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2cb430u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2cb434: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2cb434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cb438: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB438u;
        // 0x2cb43c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB440u;
}
