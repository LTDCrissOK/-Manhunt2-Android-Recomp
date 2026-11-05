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

// Function: sub_0011A950
// Address: 0x11a950 - 0x11ab68
void sub_0011A950_0x11a950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011A950_0x11a950");
#endif

    switch (ctx->pc) {
        case 0x11a98cu: goto label_11a98c;
        case 0x11a998u: goto label_11a998;
        case 0x11a9a4u: goto label_11a9a4;
        case 0x11a9b4u: goto label_11a9b4;
        case 0x11a9c8u: goto label_11a9c8;
        case 0x11a9d8u: goto label_11a9d8;
        case 0x11a9e0u: goto label_11a9e0;
        case 0x11a9f0u: goto label_11a9f0;
        case 0x11a9fcu: goto label_11a9fc;
        case 0x11aa14u: goto label_11aa14;
        case 0x11aa38u: goto label_11aa38;
        case 0x11aa40u: goto label_11aa40;
        case 0x11aa60u: goto label_11aa60;
        case 0x11aa74u: goto label_11aa74;
        case 0x11aa9cu: goto label_11aa9c;
        case 0x11aabcu: goto label_11aabc;
        case 0x11aad8u: goto label_11aad8;
        case 0x11aafcu: goto label_11aafc;
        case 0x11ab14u: goto label_11ab14;
        case 0x11ab20u: goto label_11ab20;
        case 0x11ab2cu: goto label_11ab2c;
        case 0x11ab38u: goto label_11ab38;
        default: break;
    }

    ctx->pc = 0x11a950u;

    // 0x11a950: 0x27bdfc40  addiu       $sp, $sp, -0x3C0
    ctx->pc = 0x11a950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966336));
    // 0x11a954: 0xffb30388  sd          $s3, 0x388($sp)
    ctx->pc = 0x11a954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 904), GPR_U64(ctx, 19));
    // 0x11a958: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x11a958u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a95c: 0xffb00370  sd          $s0, 0x370($sp)
    ctx->pc = 0x11a95cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 880), GPR_U64(ctx, 16));
    // 0x11a960: 0xffb10378  sd          $s1, 0x378($sp)
    ctx->pc = 0x11a960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 888), GPR_U64(ctx, 17));
    // 0x11a964: 0xffb20380  sd          $s2, 0x380($sp)
    ctx->pc = 0x11a964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 896), GPR_U64(ctx, 18));
    // 0x11a968: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x11a968u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11a96c: 0xffb50398  sd          $s5, 0x398($sp)
    ctx->pc = 0x11a96cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 920), GPR_U64(ctx, 21));
    // 0x11a970: 0xffb40390  sd          $s4, 0x390($sp)
    ctx->pc = 0x11a970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 912), GPR_U64(ctx, 20));
    // 0x11a974: 0xffb603a0  sd          $s6, 0x3A0($sp)
    ctx->pc = 0x11a974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 928), GPR_U64(ctx, 22));
    // 0x11a978: 0xffb703a8  sd          $s7, 0x3A8($sp)
    ctx->pc = 0x11a978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 936), GPR_U64(ctx, 23));
    // 0x11a97c: 0xffbe03b0  sd          $fp, 0x3B0($sp)
    ctx->pc = 0x11a97cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 944), GPR_U64(ctx, 30));
    // 0x11a980: 0xffbf03b8  sd          $ra, 0x3B8($sp)
    ctx->pc = 0x11a980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 952), GPR_U64(ctx, 31));
    // 0x11a984: 0xc046a40  jal         func_11A900
    ctx->pc = 0x11A984u;
    SET_GPR_U32(ctx, 31, 0x11A98Cu);
    ctx->pc = 0x11A988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A984u;
    // 0x11a988: 0x3c120044  lui         $s2, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)68 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11A900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A900u, 0x11A984u, 0x11A98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A98Cu;
label_11a98c:
    // 0x11a98c: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x11a98cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x11a990: 0xc09eb20  jal         func_27AC80
    ctx->pc = 0x11A990u;
    SET_GPR_U32(ctx, 31, 0x11A998u);
    ctx->pc = 0x11A994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A990u;
    // 0x11a994: 0x2484edf0  addiu       $a0, $a0, -0x1210 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27AC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27AC80u, 0x11A990u, 0x11A998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A998u;
label_11a998:
    // 0x11a998: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11a998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a99c: 0xc0d7394  jal         func_35CE50
    ctx->pc = 0x11A99Cu;
    SET_GPR_U32(ctx, 31, 0x11A9A4u);
    ctx->pc = 0x11A9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A99Cu;
    // 0x11a9a0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE50u, 0x11A99Cu, 0x11A9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A9A4u;
label_11a9a4:
    // 0x11a9a4: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x11a9a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
    // 0x11a9a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11a9a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a9ac: 0xc0d756c  jal         func_35D5B0
    ctx->pc = 0x11A9ACu;
    SET_GPR_U32(ctx, 31, 0x11A9B4u);
    ctx->pc = 0x11A9B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A9ACu;
    // 0x11a9b0: 0x24a5eea0  addiu       $a1, $a1, -0x1160 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D5B0u, 0x11A9ACu, 0x11A9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A9B4u;
label_11a9b4:
    // 0x11a9b4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x11a9b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a9b8: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x11a9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x11a9bc: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x11a9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x11a9c0: 0xc09dd98  jal         func_277660
    ctx->pc = 0x11A9C0u;
    SET_GPR_U32(ctx, 31, 0x11A9C8u);
    ctx->pc = 0x11A9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A9C0u;
    // 0x11a9c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277660u, 0x11A9C0u, 0x11A9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A9C8u;
label_11a9c8:
    // 0x11a9c8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x11a9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x11a9cc: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x11a9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x11a9d0: 0xc0d7384  jal         func_35CE10
    ctx->pc = 0x11A9D0u;
    SET_GPR_U32(ctx, 31, 0x11A9D8u);
    ctx->pc = 0x11A9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A9D0u;
    // 0x11a9d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x11A9D0u, 0x11A9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A9D8u;
label_11a9d8:
    // 0x11a9d8: 0x27b50020  addiu       $s5, $sp, 0x20
    ctx->pc = 0x11a9d8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x11a9dc: 0x0  nop
    ctx->pc = 0x11a9dcu;
    // NOP
label_11a9e0:
    // 0x11a9e0: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x11a9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x11a9e4: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x11a9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x11a9e8: 0xc09de3a  jal         func_2778E8
    ctx->pc = 0x11A9E8u;
    SET_GPR_U32(ctx, 31, 0x11A9F0u);
    ctx->pc = 0x11A9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A9E8u;
    // 0x11a9ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2778E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2778E8u, 0x11A9E8u, 0x11A9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A9F0u;
label_11a9f0:
    // 0x11a9f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11a9f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a9f4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x11A9F4u;
    SET_GPR_U32(ctx, 31, 0x11A9FCu);
    ctx->pc = 0x11A9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11A9F4u;
    // 0x11a9f8: 0x2645b998  addiu       $a1, $s2, -0x4668 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294949272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x11A9F4u, 0x11A9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11A9FCu;
label_11a9fc:
    // 0x11a9fc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x11a9fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11aa00: 0x2880b  movn        $s1, $zero, $v0
    ctx->pc = 0x11aa00u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
    // 0x11aa04: 0x1620fff6  bnez        $s1, . + 4 + (-0xA << 2)
    ctx->pc = 0x11AA04u;
    {
        const bool branch_taken_0x11aa04 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x11AA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AA04u;
        // 0x11aa08: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aa04) {
            ctx->pc = 0x11A9E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11a9e0;
        }
    }
    ctx->pc = 0x11AA0Cu;
    // 0x11aa0c: 0xc0d7384  jal         func_35CE10
    ctx->pc = 0x11AA0Cu;
    SET_GPR_U32(ctx, 31, 0x11AA14u);
    ctx->pc = 0x11AA10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AA0Cu;
    // 0x11aa10: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x11AA0Cu, 0x11AA14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AA14u;
label_11aa14:
    // 0x11aa14: 0x26620028  addiu       $v0, $s3, 0x28
    ctx->pc = 0x11aa14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
    // 0x11aa18: 0x2664002c  addiu       $a0, $s3, 0x2C
    ctx->pc = 0x11aa18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 44));
    // 0x11aa1c: 0x27be0030  addiu       $fp, $sp, 0x30
    ctx->pc = 0x11aa1cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x11aa20: 0x27b70140  addiu       $s7, $sp, 0x140
    ctx->pc = 0x11aa20u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x11aa24: 0x27b60360  addiu       $s6, $sp, 0x360
    ctx->pc = 0x11aa24u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
    // 0x11aa28: 0x27b40364  addiu       $s4, $sp, 0x364
    ctx->pc = 0x11aa28u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 868));
    // 0x11aa2c: 0xafa20368  sw          $v0, 0x368($sp)
    ctx->pc = 0x11aa2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 872), GPR_U32(ctx, 2));
    // 0x11aa30: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x11AA30u;
    {
        const bool branch_taken_0x11aa30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AA30u;
        // 0x11aa34: 0xafa4036c  sw          $a0, 0x36C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 876), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aa30) {
            ctx->pc = 0x11AAECu;
            goto label_11aaec;
        }
    }
    ctx->pc = 0x11AA38u;
label_11aa38:
    // 0x11aa38: 0xc046860  jal         func_11A180
    ctx->pc = 0x11AA38u;
    SET_GPR_U32(ctx, 31, 0x11AA40u);
    ctx->pc = 0x11AA3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AA38u;
    // 0x11aa3c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11A180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11A180u, 0x11AA38u, 0x11AA40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AA40u;
label_11aa40:
    // 0x11aa40: 0x27b10250  addiu       $s1, $sp, 0x250
    ctx->pc = 0x11aa40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x11aa44: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11aa44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11aa48: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x11aa48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11aa4c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x11aa4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x11aa50: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x11aa50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x11aa54: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x11aa54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11aa58: 0xc09e0a6  jal         func_278298
    ctx->pc = 0x11AA58u;
    SET_GPR_U32(ctx, 31, 0x11AA60u);
    ctx->pc = 0x11AA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AA58u;
    // 0x11aa5c: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278298u, 0x11AA58u, 0x11AA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AA60u;
label_11aa60:
    // 0x11aa60: 0xafa00364  sw          $zero, 0x364($sp)
    ctx->pc = 0x11aa60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 868), GPR_U32(ctx, 0));
    // 0x11aa64: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x11aa64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11aa68: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x11aa68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11aa6c: 0xc085914  jal         func_216450
    ctx->pc = 0x11AA6Cu;
    SET_GPR_U32(ctx, 31, 0x11AA74u);
    ctx->pc = 0x11AA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AA6Cu;
    // 0x11aa70: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216450u, 0x11AA6Cu, 0x11AA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AA74u;
label_11aa74:
    // 0x11aa74: 0x2407000c  addiu       $a3, $zero, 0xC
    ctx->pc = 0x11aa74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x11aa78: 0x8fa30364  lw          $v1, 0x364($sp)
    ctx->pc = 0x11aa78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 868)));
    // 0x11aa7c: 0x2478018  mult        $s0, $s2, $a3
    ctx->pc = 0x11aa7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x11aa80: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x11aa80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11aa84: 0x8fa70368  lw          $a3, 0x368($sp)
    ctx->pc = 0x11aa84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 872)));
    // 0x11aa88: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x11aa88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11aa8c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x11aa8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11aa90: 0xf01021  addu        $v0, $a3, $s0
    ctx->pc = 0x11aa90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
    // 0x11aa94: 0xc085914  jal         func_216450
    ctx->pc = 0x11AA94u;
    SET_GPR_U32(ctx, 31, 0x11AA9Cu);
    ctx->pc = 0x11AA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AA94u;
    // 0x11aa98: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216450u, 0x11AA94u, 0x11AA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AA9Cu;
label_11aa9c:
    // 0x11aa9c: 0x8fa2036c  lw          $v0, 0x36C($sp)
    ctx->pc = 0x11aa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 876)));
    // 0x11aaa0: 0x3c070044  lui         $a3, 0x44
    ctx->pc = 0x11aaa0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)68 << 16));
    // 0x11aaa4: 0x8fa30364  lw          $v1, 0x364($sp)
    ctx->pc = 0x11aaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 868)));
    // 0x11aaa8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11aaa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11aaac: 0x508021  addu        $s0, $v0, $s0
    ctx->pc = 0x11aaacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x11aab0: 0x24e5b9b0  addiu       $a1, $a3, -0x4650
    ctx->pc = 0x11aab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4294949296));
    // 0x11aab4: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11AAB4u;
    SET_GPR_U32(ctx, 31, 0x11AABCu);
    ctx->pc = 0x11AAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AAB4u;
    // 0x11aab8: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11AAB4u, 0x11AABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AABCu;
label_11aabc:
    // 0x11aabc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11AABCu;
    {
        const bool branch_taken_0x11aabc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11AAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AABCu;
        // 0x11aac0: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aabc) {
            ctx->pc = 0x11AACCu;
            goto label_11aacc;
        }
    }
    ctx->pc = 0x11AAC4u;
    // 0x11aac4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11AAC4u;
    {
        const bool branch_taken_0x11aac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11AAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AAC4u;
        // 0x11aac8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aac4) {
            ctx->pc = 0x11AADCu;
            goto label_11aadc;
        }
    }
    ctx->pc = 0x11AACCu;
label_11aacc:
    // 0x11aacc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11aaccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11aad0: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x11AAD0u;
    SET_GPR_U32(ctx, 31, 0x11AAD8u);
    ctx->pc = 0x11AAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AAD0u;
    // 0x11aad4: 0x2445b9b8  addiu       $a1, $v0, -0x4648 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x11AAD0u, 0x11AAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AAD8u;
label_11aad8:
    // 0x11aad8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x11aad8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11aadc:
    // 0x11aadc: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x11aadcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x11aae0: 0x2442018  mult        $a0, $s2, $a0
    ctx->pc = 0x11aae0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x11aae4: 0x931021  addu        $v0, $a0, $s3
    ctx->pc = 0x11aae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x11aae8: 0xac430030  sw          $v1, 0x30($v0)
    ctx->pc = 0x11aae8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 3));
label_11aaec:
    // 0x11aaec: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x11aaecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x11aaf0: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x11aaf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x11aaf4: 0xc09de68  jal         func_2779A0
    ctx->pc = 0x11AAF4u;
    SET_GPR_U32(ctx, 31, 0x11AAFCu);
    ctx->pc = 0x11AAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AAF4u;
    // 0x11aaf8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x11AAF4u, 0x11AAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AAFCu;
label_11aafc:
    // 0x11aafc: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x11AAFCu;
    {
        const bool branch_taken_0x11aafc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11AB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AAFCu;
        // 0x11ab00: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11aafc) {
            ctx->pc = 0x11AA38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11aa38;
        }
    }
    ctx->pc = 0x11AB04u;
    // 0x11ab04: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x11ab04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x11ab08: 0x2484fe40  addiu       $a0, $a0, -0x1C0
    ctx->pc = 0x11ab08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966848));
    // 0x11ab0c: 0xc09ddec  jal         func_2777B0
    ctx->pc = 0x11AB0Cu;
    SET_GPR_U32(ctx, 31, 0x11AB14u);
    ctx->pc = 0x2777B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2777B0u, 0x11AB0Cu, 0x11AB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AB14u;
label_11ab14:
    // 0x11ab14: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x11ab14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ab18: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x11AB18u;
    SET_GPR_U32(ctx, 31, 0x11AB20u);
    ctx->pc = 0x11AB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AB18u;
    // 0x11ab1c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x11AB18u, 0x11AB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AB20u;
label_11ab20:
    // 0x11ab20: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x11ab20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x11ab24: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x11AB24u;
    SET_GPR_U32(ctx, 31, 0x11AB2Cu);
    ctx->pc = 0x11AB28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AB24u;
    // 0x11ab28: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x11AB24u, 0x11AB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AB2Cu;
label_11ab2c:
    // 0x11ab2c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11ab2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ab30: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x11AB30u;
    SET_GPR_U32(ctx, 31, 0x11AB38u);
    ctx->pc = 0x11AB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11AB30u;
    // 0x11ab34: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x11AB30u, 0x11AB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11AB38u;
label_11ab38:
    // 0x11ab38: 0xdfb00370  ld          $s0, 0x370($sp)
    ctx->pc = 0x11ab38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 880)));
    // 0x11ab3c: 0xdfb10378  ld          $s1, 0x378($sp)
    ctx->pc = 0x11ab3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 888)));
    // 0x11ab40: 0xdfb20380  ld          $s2, 0x380($sp)
    ctx->pc = 0x11ab40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 896)));
    // 0x11ab44: 0xdfb30388  ld          $s3, 0x388($sp)
    ctx->pc = 0x11ab44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 904)));
    // 0x11ab48: 0xdfb40390  ld          $s4, 0x390($sp)
    ctx->pc = 0x11ab48u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 912)));
    // 0x11ab4c: 0xdfb50398  ld          $s5, 0x398($sp)
    ctx->pc = 0x11ab4cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 920)));
    // 0x11ab50: 0xdfb603a0  ld          $s6, 0x3A0($sp)
    ctx->pc = 0x11ab50u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 928)));
    // 0x11ab54: 0xdfb703a8  ld          $s7, 0x3A8($sp)
    ctx->pc = 0x11ab54u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 936)));
    // 0x11ab58: 0xdfbe03b0  ld          $fp, 0x3B0($sp)
    ctx->pc = 0x11ab58u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 944)));
    // 0x11ab5c: 0xdfbf03b8  ld          $ra, 0x3B8($sp)
    ctx->pc = 0x11ab5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 952)));
    // 0x11ab60: 0x3e00008  jr          $ra
    ctx->pc = 0x11AB60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11AB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11AB60u;
        // 0x11ab64: 0x27bd03c0  addiu       $sp, $sp, 0x3C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 960));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11AB60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11AB68u;
}
