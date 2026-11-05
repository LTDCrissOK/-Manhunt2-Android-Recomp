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

// Function: sub_003738D8
// Address: 0x3738d8 - 0x373a88
void sub_003738D8_0x3738d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003738D8_0x3738d8");
#endif

    switch (ctx->pc) {
        case 0x373930u: goto label_373930;
        case 0x373970u: goto label_373970;
        case 0x373994u: goto label_373994;
        case 0x3739dcu: goto label_3739dc;
        case 0x3739e4u: goto label_3739e4;
        default: break;
    }

    ctx->pc = 0x3738d8u;

    // 0x3738d8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3738d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3738dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3738dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3738e0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3738e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3738e4: 0x3c10005c  lui         $s0, 0x5C
    ctx->pc = 0x3738e4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)92 << 16));
    // 0x3738e8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3738e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3738ec: 0x2612f910  addiu       $s2, $s0, -0x6F0
    ctx->pc = 0x3738ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965520));
    // 0x3738f0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3738f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3738f4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3738f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3738f8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x3738f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x3738fc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x3738fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373900: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x373900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x373904: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x373904u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373908: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x373908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x37390c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x37390cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x373910: 0x8e02f910  lw          $v0, -0x6F0($s0)
    ctx->pc = 0x373910u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5BF910u));
    // 0x373914: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x373914u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5BF914u));
    // 0x373918: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x373918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x37391c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x37391cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x373920: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x373920u;
    {
        const bool branch_taken_0x373920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x373924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373920u;
        // 0x373924: 0xe0b02d  daddu       $s6, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373920) {
            ctx->pc = 0x373930u;
            goto label_373930;
        }
    }
    ctx->pc = 0x373928u;
    // 0x373928: 0xc0dc442  jal         func_371108
    ctx->pc = 0x373928u;
    SET_GPR_U32(ctx, 31, 0x373930u);
    ctx->pc = 0x37392Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373928u;
    // 0x37392c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371108u, 0x373928u, 0x373930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373930u;
label_373930:
    // 0x373930: 0x8e02f910  lw          $v0, -0x6F0($s0)
    ctx->pc = 0x373930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965520)));
    // 0x373934: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x373934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x373938: 0x34049800  ori         $a0, $zero, 0x9800
    ctx->pc = 0x373938u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)38912);
    // 0x37393c: 0x4213c  dsll32      $a0, $a0, 4
    ctx->pc = 0x37393cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 4));
    // 0x373940: 0x34848000  ori         $a0, $a0, 0x8000
    ctx->pc = 0x373940u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32768);
    // 0x373944: 0x42278  dsll        $a0, $a0, 9
    ctx->pc = 0x373944u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 9);
    // 0x373948: 0x34840101  ori         $a0, $a0, 0x101
    ctx->pc = 0x373948u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)257);
    // 0x37394c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x37394cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x373950: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x373950u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x373954: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x373954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x373958: 0xae02f910  sw          $v0, -0x6F0($s0)
    ctx->pc = 0x373958u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965520), GPR_U32(ctx, 2));
    // 0x37395c: 0x24430008  addiu       $v1, $v0, 0x8
    ctx->pc = 0x37395cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x373960: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x373960u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
    // 0x373964: 0xae03f910  sw          $v1, -0x6F0($s0)
    ctx->pc = 0x373964u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965520), GPR_U32(ctx, 3));
    // 0x373968: 0xc0dfe90  jal         func_37FA40
    ctx->pc = 0x373968u;
    SET_GPR_U32(ctx, 31, 0x373970u);
    ctx->pc = 0x37396Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373968u;
    // 0x37396c: 0x8ca4cd3c  lw          $a0, -0x32C4($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294954300)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37FA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37FA40u, 0x373968u, 0x373970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373970u;
label_373970:
    // 0x373970: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x373970u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373974: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x373974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x373978: 0x8e02f910  lw          $v0, -0x6F0($s0)
    ctx->pc = 0x373978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965520)));
    // 0x37397c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x37397cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x373980: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x373980u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x373984: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x373984u;
    {
        const bool branch_taken_0x373984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x373988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373984u;
        // 0x373988: 0x3c025000  lui         $v0, 0x5000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373984) {
            ctx->pc = 0x373998u;
            goto label_373998;
        }
    }
    ctx->pc = 0x37398Cu;
    // 0x37398c: 0xc0dc442  jal         func_371108
    ctx->pc = 0x37398Cu;
    SET_GPR_U32(ctx, 31, 0x373994u);
    ctx->pc = 0x373990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37398Cu;
    // 0x373990: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x371108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x371108u, 0x37398Cu, 0x373994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373994u;
label_373994:
    // 0x373994: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x373994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
label_373998:
    // 0x373998: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x373998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
    // 0x37399c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x37399cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3739a0: 0x8e04f910  lw          $a0, -0x6F0($s0)
    ctx->pc = 0x3739a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965520)));
    // 0x3739a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3739a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3739a8: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x3739a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x3739ac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3739acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3739b0: 0x24053fff  addiu       $a1, $zero, 0x3FFF
    ctx->pc = 0x3739b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
    // 0x3739b4: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x3739b4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x3739b8: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x3739b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x3739bc: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x3739bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x3739c0: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x3739c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x3739c4: 0xae04f910  sw          $a0, -0x6F0($s0)
    ctx->pc = 0x3739c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965520), GPR_U32(ctx, 4));
    // 0x3739c8: 0x24830008  addiu       $v1, $a0, 0x8
    ctx->pc = 0x3739c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x3739cc: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x3739ccu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x3739d0: 0xae03f910  sw          $v1, -0x6F0($s0)
    ctx->pc = 0x3739d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965520), GPR_U32(ctx, 3));
    // 0x3739d4: 0xc0dd716  jal         func_375C58
    ctx->pc = 0x3739D4u;
    SET_GPR_U32(ctx, 31, 0x3739DCu);
    ctx->pc = 0x3739D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3739D4u;
    // 0x3739d8: 0xacc5cd00  sw          $a1, -0x3300($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294954240), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x375C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375C58u, 0x3739D4u, 0x3739DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3739DCu;
label_3739dc:
    // 0x3739dc: 0xc0dd720  jal         func_375C80
    ctx->pc = 0x3739DCu;
    SET_GPR_U32(ctx, 31, 0x3739E4u);
    ctx->pc = 0x375C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375C80u, 0x3739DCu, 0x3739E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3739E4u;
label_3739e4:
    // 0x3739e4: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x3739E4u;
    {
        const bool branch_taken_0x3739e4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3739E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3739E4u;
        // 0x3739e8: 0x3c03006c  lui         $v1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3739e4) {
            ctx->pc = 0x373A00u;
            goto label_373a00;
        }
    }
    ctx->pc = 0x3739ECu;
    // 0x3739ec: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x3739ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3739f0: 0x246560a0  addiu       $a1, $v1, 0x60A0
    ctx->pc = 0x3739f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 24736));
    // 0x3739f4: 0xac6460a0  sw          $a0, 0x60A0($v1)
    ctx->pc = 0x3739f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24736), GPR_U32(ctx, 4));
    // 0x3739f8: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x3739f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3739fc: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x3739fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_373a00:
    // 0x373a00: 0x12800006  beqz        $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x373A00u;
    {
        const bool branch_taken_0x373a00 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x373A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373A00u;
        // 0x373a04: 0x3c03006c  lui         $v1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373a00) {
            ctx->pc = 0x373A1Cu;
            goto label_373a1c;
        }
    }
    ctx->pc = 0x373A08u;
    // 0x373a08: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x373a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x373a0c: 0x246560b0  addiu       $a1, $v1, 0x60B0
    ctx->pc = 0x373a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 24752));
    // 0x373a10: 0xac6460b0  sw          $a0, 0x60B0($v1)
    ctx->pc = 0x373a10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24752), GPR_U32(ctx, 4));
    // 0x373a14: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x373a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x373a18: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x373a18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_373a1c:
    // 0x373a1c: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x373A1Cu;
    {
        const bool branch_taken_0x373a1c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x373A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373A1Cu;
        // 0x373a20: 0x3c03006c  lui         $v1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373a1c) {
            ctx->pc = 0x373A38u;
            goto label_373a38;
        }
    }
    ctx->pc = 0x373A24u;
    // 0x373a24: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x373a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x373a28: 0x246360a0  addiu       $v1, $v1, 0x60A0
    ctx->pc = 0x373a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24736));
    // 0x373a2c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x373a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x373a30: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x373a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x373a34: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x373a34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_373a38:
    // 0x373a38: 0x12c00006  beqz        $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x373A38u;
    {
        const bool branch_taken_0x373a38 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x373A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373A38u;
        // 0x373a3c: 0x3c03006c  lui         $v1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373a38) {
            ctx->pc = 0x373A54u;
            goto label_373a54;
        }
    }
    ctx->pc = 0x373A40u;
    // 0x373a40: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x373a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x373a44: 0x246360b0  addiu       $v1, $v1, 0x60B0
    ctx->pc = 0x373a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24752));
    // 0x373a48: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x373a48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x373a4c: 0x8ec40004  lw          $a0, 0x4($s6)
    ctx->pc = 0x373a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x373a50: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x373a50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_373a54:
    // 0x373a54: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x373a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x373a58: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x373a58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x373a5c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x373a5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x373a60: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x373a60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x373a64: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x373a64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x373a68: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x373a68u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x373a6c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x373a6cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x373a70: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x373a70u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x373a74: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x373a74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x373a78: 0xac40cd18  sw          $zero, -0x32E8($v0)
    ctx->pc = 0x373a78u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FCD18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FCD18u, _value); } while (0);
    // 0x373a7c: 0x3e00008  jr          $ra
    ctx->pc = 0x373A7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373A7Cu;
        // 0x373a80: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373A7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373A84u;
    // 0x373a84: 0x0  nop
    ctx->pc = 0x373a84u;
    // NOP
    ctx->pc = 0x373a88u;
}
