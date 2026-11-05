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

// Function: sub_0019C960
// Address: 0x19c960 - 0x19cbd8
void sub_0019C960_0x19c960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019C960_0x19c960");
#endif

    switch (ctx->pc) {
        case 0x19c960u: goto label_19c960;
        case 0x19c964u: goto label_19c964;
        case 0x19c968u: goto label_19c968;
        case 0x19c96cu: goto label_19c96c;
        case 0x19c970u: goto label_19c970;
        case 0x19c974u: goto label_19c974;
        case 0x19c978u: goto label_19c978;
        case 0x19c97cu: goto label_19c97c;
        case 0x19c980u: goto label_19c980;
        case 0x19c984u: goto label_19c984;
        case 0x19c988u: goto label_19c988;
        case 0x19c98cu: goto label_19c98c;
        case 0x19c990u: goto label_19c990;
        case 0x19c994u: goto label_19c994;
        case 0x19c998u: goto label_19c998;
        case 0x19c99cu: goto label_19c99c;
        case 0x19c9a0u: goto label_19c9a0;
        case 0x19c9a4u: goto label_19c9a4;
        case 0x19c9a8u: goto label_19c9a8;
        case 0x19c9acu: goto label_19c9ac;
        case 0x19c9b0u: goto label_19c9b0;
        case 0x19c9b4u: goto label_19c9b4;
        case 0x19c9b8u: goto label_19c9b8;
        case 0x19c9bcu: goto label_19c9bc;
        case 0x19c9c0u: goto label_19c9c0;
        case 0x19c9c4u: goto label_19c9c4;
        case 0x19c9c8u: goto label_19c9c8;
        case 0x19c9ccu: goto label_19c9cc;
        case 0x19c9d0u: goto label_19c9d0;
        case 0x19c9d4u: goto label_19c9d4;
        case 0x19c9d8u: goto label_19c9d8;
        case 0x19c9dcu: goto label_19c9dc;
        case 0x19c9e0u: goto label_19c9e0;
        case 0x19c9e4u: goto label_19c9e4;
        case 0x19c9e8u: goto label_19c9e8;
        case 0x19c9ecu: goto label_19c9ec;
        case 0x19c9f0u: goto label_19c9f0;
        case 0x19c9f4u: goto label_19c9f4;
        case 0x19c9f8u: goto label_19c9f8;
        case 0x19c9fcu: goto label_19c9fc;
        case 0x19ca00u: goto label_19ca00;
        case 0x19ca04u: goto label_19ca04;
        case 0x19ca08u: goto label_19ca08;
        case 0x19ca0cu: goto label_19ca0c;
        case 0x19ca10u: goto label_19ca10;
        case 0x19ca14u: goto label_19ca14;
        case 0x19ca18u: goto label_19ca18;
        case 0x19ca1cu: goto label_19ca1c;
        case 0x19ca20u: goto label_19ca20;
        case 0x19ca24u: goto label_19ca24;
        case 0x19ca28u: goto label_19ca28;
        case 0x19ca2cu: goto label_19ca2c;
        case 0x19ca30u: goto label_19ca30;
        case 0x19ca34u: goto label_19ca34;
        case 0x19ca38u: goto label_19ca38;
        case 0x19ca3cu: goto label_19ca3c;
        case 0x19ca40u: goto label_19ca40;
        case 0x19ca44u: goto label_19ca44;
        case 0x19ca48u: goto label_19ca48;
        case 0x19ca4cu: goto label_19ca4c;
        case 0x19ca50u: goto label_19ca50;
        case 0x19ca54u: goto label_19ca54;
        case 0x19ca58u: goto label_19ca58;
        case 0x19ca5cu: goto label_19ca5c;
        case 0x19ca60u: goto label_19ca60;
        case 0x19ca64u: goto label_19ca64;
        case 0x19ca68u: goto label_19ca68;
        case 0x19ca6cu: goto label_19ca6c;
        case 0x19ca70u: goto label_19ca70;
        case 0x19ca74u: goto label_19ca74;
        case 0x19ca78u: goto label_19ca78;
        case 0x19ca7cu: goto label_19ca7c;
        case 0x19ca80u: goto label_19ca80;
        case 0x19ca84u: goto label_19ca84;
        case 0x19ca88u: goto label_19ca88;
        case 0x19ca8cu: goto label_19ca8c;
        case 0x19ca90u: goto label_19ca90;
        case 0x19ca94u: goto label_19ca94;
        case 0x19ca98u: goto label_19ca98;
        case 0x19ca9cu: goto label_19ca9c;
        case 0x19caa0u: goto label_19caa0;
        case 0x19caa4u: goto label_19caa4;
        case 0x19caa8u: goto label_19caa8;
        case 0x19caacu: goto label_19caac;
        case 0x19cab0u: goto label_19cab0;
        case 0x19cab4u: goto label_19cab4;
        case 0x19cab8u: goto label_19cab8;
        case 0x19cabcu: goto label_19cabc;
        case 0x19cac0u: goto label_19cac0;
        case 0x19cac4u: goto label_19cac4;
        case 0x19cac8u: goto label_19cac8;
        case 0x19caccu: goto label_19cacc;
        case 0x19cad0u: goto label_19cad0;
        case 0x19cad4u: goto label_19cad4;
        case 0x19cad8u: goto label_19cad8;
        case 0x19cadcu: goto label_19cadc;
        case 0x19cae0u: goto label_19cae0;
        case 0x19cae4u: goto label_19cae4;
        case 0x19cae8u: goto label_19cae8;
        case 0x19caecu: goto label_19caec;
        case 0x19caf0u: goto label_19caf0;
        case 0x19caf4u: goto label_19caf4;
        case 0x19caf8u: goto label_19caf8;
        case 0x19cafcu: goto label_19cafc;
        case 0x19cb00u: goto label_19cb00;
        case 0x19cb04u: goto label_19cb04;
        case 0x19cb08u: goto label_19cb08;
        case 0x19cb0cu: goto label_19cb0c;
        case 0x19cb10u: goto label_19cb10;
        case 0x19cb14u: goto label_19cb14;
        case 0x19cb18u: goto label_19cb18;
        case 0x19cb1cu: goto label_19cb1c;
        case 0x19cb20u: goto label_19cb20;
        case 0x19cb24u: goto label_19cb24;
        case 0x19cb28u: goto label_19cb28;
        case 0x19cb2cu: goto label_19cb2c;
        case 0x19cb30u: goto label_19cb30;
        case 0x19cb34u: goto label_19cb34;
        case 0x19cb38u: goto label_19cb38;
        case 0x19cb3cu: goto label_19cb3c;
        case 0x19cb40u: goto label_19cb40;
        case 0x19cb44u: goto label_19cb44;
        case 0x19cb48u: goto label_19cb48;
        case 0x19cb4cu: goto label_19cb4c;
        case 0x19cb50u: goto label_19cb50;
        case 0x19cb54u: goto label_19cb54;
        case 0x19cb58u: goto label_19cb58;
        case 0x19cb5cu: goto label_19cb5c;
        case 0x19cb60u: goto label_19cb60;
        case 0x19cb64u: goto label_19cb64;
        case 0x19cb68u: goto label_19cb68;
        case 0x19cb6cu: goto label_19cb6c;
        case 0x19cb70u: goto label_19cb70;
        case 0x19cb74u: goto label_19cb74;
        case 0x19cb78u: goto label_19cb78;
        case 0x19cb7cu: goto label_19cb7c;
        case 0x19cb80u: goto label_19cb80;
        case 0x19cb84u: goto label_19cb84;
        case 0x19cb88u: goto label_19cb88;
        case 0x19cb8cu: goto label_19cb8c;
        case 0x19cb90u: goto label_19cb90;
        case 0x19cb94u: goto label_19cb94;
        case 0x19cb98u: goto label_19cb98;
        case 0x19cb9cu: goto label_19cb9c;
        case 0x19cba0u: goto label_19cba0;
        case 0x19cba4u: goto label_19cba4;
        case 0x19cba8u: goto label_19cba8;
        case 0x19cbacu: goto label_19cbac;
        case 0x19cbb0u: goto label_19cbb0;
        case 0x19cbb4u: goto label_19cbb4;
        case 0x19cbb8u: goto label_19cbb8;
        case 0x19cbbcu: goto label_19cbbc;
        case 0x19cbc0u: goto label_19cbc0;
        case 0x19cbc4u: goto label_19cbc4;
        case 0x19cbc8u: goto label_19cbc8;
        case 0x19cbccu: goto label_19cbcc;
        case 0x19cbd0u: goto label_19cbd0;
        case 0x19cbd4u: goto label_19cbd4;
        default: break;
    }

    ctx->pc = 0x19c960u;

label_19c960:
    // 0x19c960: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19c960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_19c964:
    // 0x19c964: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19c964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19c968:
    // 0x19c968: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19c968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_19c96c:
    // 0x19c96c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19c96cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_19c970:
    // 0x19c970: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19c970u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19c974:
    // 0x19c974: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x19c974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_19c978:
    // 0x19c978: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x19c978u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_19c97c:
    // 0x19c97c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x19c97cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_19c980:
    // 0x19c980: 0x24840898  addiu       $a0, $a0, 0x898
    ctx->pc = 0x19c980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2200));
label_19c984:
    // 0x19c984: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x19c984u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_19c988:
    // 0x19c988: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x19c988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_19c98c:
    // 0x19c98c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x19c98cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_19c990:
    // 0x19c990: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x19c990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_19c994:
    // 0x19c994: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x19c994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_19c998:
    // 0x19c998: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x19c998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_19c99c:
    // 0x19c99c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x19c99cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_19c9a0:
    // 0x19c9a0: 0xae050010  sw          $a1, 0x10($s0)
    ctx->pc = 0x19c9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 5));
label_19c9a4:
    // 0x19c9a4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x19c9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_19c9a8:
    // 0x19c9a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19c9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_19c9ac:
    // 0x19c9ac: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x19c9acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_19c9b0:
    // 0x19c9b0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x19c9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_19c9b4:
    // 0x19c9b4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_19c9b8:
    if (ctx->pc == 0x19C9B8u) {
        ctx->pc = 0x19C9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C9B4u;
        // 0x19c9b8: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C9BCu;
        goto label_19c9bc;
    }
    ctx->pc = 0x19C9B4u;
    {
        const bool branch_taken_0x19c9b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c9b4) {
            ctx->pc = 0x19C9B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19C9B4u;
            // 0x19c9b8: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19C9D0u;
            goto label_19c9d0;
        }
    }
    ctx->pc = 0x19C9BCu;
label_19c9bc:
    // 0x19c9bc: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x19c9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_19c9c0:
    // 0x19c9c0: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x19c9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_19c9c4:
    // 0x19c9c4: 0x40f809  jalr        $v0
label_19c9c8:
    if (ctx->pc == 0x19C9C8u) {
        ctx->pc = 0x19C9CCu;
        goto label_19c9cc;
    }
    ctx->pc = 0x19C9C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19C9CCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C9C4u, 0x19C9CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19C9CCu;
label_19c9cc:
    // 0x19c9cc: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x19c9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_19c9d0:
    // 0x19c9d0: 0xc061a1e  jal         func_186878
label_19c9d4:
    if (ctx->pc == 0x19C9D4u) {
        ctx->pc = 0x19C9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C9D0u;
        // 0x19c9d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C9D8u;
        goto label_19c9d8;
    }
    ctx->pc = 0x19C9D0u;
    SET_GPR_U32(ctx, 31, 0x19C9D8u);
    ctx->pc = 0x19C9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C9D0u;
    // 0x19c9d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x19C9D0u, 0x19C9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C9D8u;
label_19c9d8:
    // 0x19c9d8: 0xc06d97a  jal         func_1B65E8
label_19c9dc:
    if (ctx->pc == 0x19C9DCu) {
        ctx->pc = 0x19C9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C9D8u;
        // 0x19c9dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C9E0u;
        goto label_19c9e0;
    }
    ctx->pc = 0x19C9D8u;
    SET_GPR_U32(ctx, 31, 0x19C9E0u);
    ctx->pc = 0x19C9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C9D8u;
    // 0x19c9dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B65E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B65E8u, 0x19C9D8u, 0x19C9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C9E0u;
label_19c9e0:
    // 0x19c9e0: 0xc061a16  jal         func_186858
label_19c9e4:
    if (ctx->pc == 0x19C9E4u) {
        ctx->pc = 0x19C9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C9E0u;
        // 0x19c9e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C9E8u;
        goto label_19c9e8;
    }
    ctx->pc = 0x19C9E0u;
    SET_GPR_U32(ctx, 31, 0x19C9E8u);
    ctx->pc = 0x19C9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C9E0u;
    // 0x19c9e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x19C9E0u, 0x19C9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C9E8u;
label_19c9e8:
    // 0x19c9e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19c9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19c9ec:
    // 0x19c9ec: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x19c9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_19c9f0:
    // 0x19c9f0: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x19c9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
label_19c9f4:
    // 0x19c9f4: 0x8c822b00  lw          $v0, 0x2B00($a0)
    ctx->pc = 0x19c9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11008)));
label_19c9f8:
    // 0x19c9f8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_19c9fc:
    if (ctx->pc == 0x19C9FCu) {
        ctx->pc = 0x19C9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C9F8u;
        // 0x19c9fc: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CA00u;
        goto label_19ca00;
    }
    ctx->pc = 0x19C9F8u;
    {
        const bool branch_taken_0x19c9f8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x19C9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C9F8u;
        // 0x19c9fc: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c9f8) {
            ctx->pc = 0x19CA14u;
            goto label_19ca14;
        }
    }
    ctx->pc = 0x19CA00u;
label_19ca00:
    // 0x19ca00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19ca00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19ca04:
    // 0x19ca04: 0x0  nop
    ctx->pc = 0x19ca04u;
    // NOP
label_19ca08:
    // 0x19ca08: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19ca08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19ca0c:
    // 0x19ca0c: 0x10000008  b           . + 4 + (0x8 << 2)
label_19ca10:
    if (ctx->pc == 0x19CA10u) {
        ctx->pc = 0x19CA14u;
        goto label_19ca14;
    }
    ctx->pc = 0x19CA0Cu;
    {
        const bool branch_taken_0x19ca0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ca0c) {
            ctx->pc = 0x19CA30u;
            goto label_19ca30;
        }
    }
    ctx->pc = 0x19CA14u;
label_19ca14:
    // 0x19ca14: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x19ca14u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_19ca18:
    // 0x19ca18: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19ca18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_19ca1c:
    // 0x19ca1c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19ca1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_19ca20:
    // 0x19ca20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19ca20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19ca24:
    // 0x19ca24: 0x0  nop
    ctx->pc = 0x19ca24u;
    // NOP
label_19ca28:
    // 0x19ca28: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19ca28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19ca2c:
    // 0x19ca2c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x19ca2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_19ca30:
    // 0x19ca30: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x19ca30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_19ca34:
    // 0x19ca34: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x19ca34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_19ca38:
    // 0x19ca38: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x19ca38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_19ca3c:
    // 0x19ca3c: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x19ca3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_19ca40:
    // 0x19ca40: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x19ca40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19ca44:
    // 0x19ca44: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x19ca44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
label_19ca48:
    // 0x19ca48: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x19ca48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19ca4c:
    // 0x19ca4c: 0xc0b12b0  jal         func_2C4AC0
label_19ca50:
    if (ctx->pc == 0x19CA50u) {
        ctx->pc = 0x19CA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CA4Cu;
        // 0x19ca50: 0x46140502  mul.s       $f20, $f0, $f20 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CA54u;
        goto label_19ca54;
    }
    ctx->pc = 0x19CA4Cu;
    SET_GPR_U32(ctx, 31, 0x19CA54u);
    ctx->pc = 0x19CA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CA4Cu;
    // 0x19ca50: 0x46140502  mul.s       $f20, $f0, $f20 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x19CA4Cu, 0x19CA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CA54u;
label_19ca54:
    // 0x19ca54: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x19ca54u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_19ca58:
    // 0x19ca58: 0xe6140080  swc1        $f20, 0x80($s0)
    ctx->pc = 0x19ca58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
label_19ca5c:
    // 0x19ca5c: 0x8e422b00  lw          $v0, 0x2B00($s2)
    ctx->pc = 0x19ca5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11008)));
label_19ca60:
    // 0x19ca60: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_19ca64:
    if (ctx->pc == 0x19CA64u) {
        ctx->pc = 0x19CA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CA60u;
        // 0x19ca64: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CA68u;
        goto label_19ca68;
    }
    ctx->pc = 0x19CA60u;
    {
        const bool branch_taken_0x19ca60 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x19CA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CA60u;
        // 0x19ca64: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ca60) {
            ctx->pc = 0x19CA7Cu;
            goto label_19ca7c;
        }
    }
    ctx->pc = 0x19CA68u;
label_19ca68:
    // 0x19ca68: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x19ca68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_19ca6c:
    // 0x19ca6c: 0x0  nop
    ctx->pc = 0x19ca6cu;
    // NOP
label_19ca70:
    // 0x19ca70: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x19ca70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_19ca74:
    // 0x19ca74: 0x10000007  b           . + 4 + (0x7 << 2)
label_19ca78:
    if (ctx->pc == 0x19CA78u) {
        ctx->pc = 0x19CA7Cu;
        goto label_19ca7c;
    }
    ctx->pc = 0x19CA74u;
    {
        const bool branch_taken_0x19ca74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ca74) {
            ctx->pc = 0x19CA94u;
            goto label_19ca94;
        }
    }
    ctx->pc = 0x19CA7Cu;
label_19ca7c:
    // 0x19ca7c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19ca7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_19ca80:
    // 0x19ca80: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19ca80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_19ca84:
    // 0x19ca84: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x19ca84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_19ca88:
    // 0x19ca88: 0x0  nop
    ctx->pc = 0x19ca88u;
    // NOP
label_19ca8c:
    // 0x19ca8c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x19ca8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_19ca90:
    // 0x19ca90: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x19ca90u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_19ca94:
    // 0x19ca94: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x19ca94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_19ca98:
    // 0x19ca98: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x19ca98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_19ca9c:
    // 0x19ca9c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19ca9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19caa0:
    // 0x19caa0: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x19caa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
label_19caa4:
    // 0x19caa4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19caa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_19caa8:
    // 0x19caa8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19caa8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19caac:
    // 0x19caac: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x19caacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_19cab0:
    // 0x19cab0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x19cab0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_19cab4:
    // 0x19cab4: 0xe60000b0  swc1        $f0, 0xB0($s0)
    ctx->pc = 0x19cab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 176), bits); }
label_19cab8:
    // 0x19cab8: 0x8c62efe8  lw          $v0, -0x1018($v1)
    ctx->pc = 0x19cab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963176)));
label_19cabc:
    // 0x19cabc: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x19cabcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_19cac0:
    // 0x19cac0: 0x5440003f  bnel        $v0, $zero, . + 4 + (0x3F << 2)
label_19cac4:
    if (ctx->pc == 0x19CAC4u) {
        ctx->pc = 0x19CAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CAC0u;
        // 0x19cac4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CAC8u;
        goto label_19cac8;
    }
    ctx->pc = 0x19CAC0u;
    {
        const bool branch_taken_0x19cac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19cac0) {
            ctx->pc = 0x19CAC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19CAC0u;
            // 0x19cac4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19CBC0u;
            goto label_19cbc0;
        }
    }
    ctx->pc = 0x19CAC8u;
label_19cac8:
    // 0x19cac8: 0x3c11003f  lui         $s1, 0x3F
    ctx->pc = 0x19cac8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)63 << 16));
label_19cacc:
    // 0x19cacc: 0x8e2208e8  lw          $v0, 0x8E8($s1)
    ctx->pc = 0x19caccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2280)));
label_19cad0:
    // 0x19cad0: 0x5440003b  bnel        $v0, $zero, . + 4 + (0x3B << 2)
label_19cad4:
    if (ctx->pc == 0x19CAD4u) {
        ctx->pc = 0x19CAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CAD0u;
        // 0x19cad4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CAD8u;
        goto label_19cad8;
    }
    ctx->pc = 0x19CAD0u;
    {
        const bool branch_taken_0x19cad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19cad0) {
            ctx->pc = 0x19CAD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19CAD0u;
            // 0x19cad4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19CBC0u;
            goto label_19cbc0;
        }
    }
    ctx->pc = 0x19CAD8u;
label_19cad8:
    // 0x19cad8: 0xc06668e  jal         func_199A38
label_19cadc:
    if (ctx->pc == 0x19CADCu) {
        ctx->pc = 0x19CADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CAD8u;
        // 0x19cadc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CAE0u;
        goto label_19cae0;
    }
    ctx->pc = 0x19CAD8u;
    SET_GPR_U32(ctx, 31, 0x19CAE0u);
    ctx->pc = 0x19CADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CAD8u;
    // 0x19cadc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x199A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199A38u, 0x19CAD8u, 0x19CAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CAE0u;
label_19cae0:
    // 0x19cae0: 0x54400037  bnel        $v0, $zero, . + 4 + (0x37 << 2)
label_19cae4:
    if (ctx->pc == 0x19CAE4u) {
        ctx->pc = 0x19CAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CAE0u;
        // 0x19cae4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CAE8u;
        goto label_19cae8;
    }
    ctx->pc = 0x19CAE0u;
    {
        const bool branch_taken_0x19cae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19cae0) {
            ctx->pc = 0x19CAE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19CAE0u;
            // 0x19cae4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19CBC0u;
            goto label_19cbc0;
        }
    }
    ctx->pc = 0x19CAE8u;
label_19cae8:
    // 0x19cae8: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x19cae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_19caec:
    // 0x19caec: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x19caecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19caf0:
    // 0x19caf0: 0x24440908  addiu       $a0, $v0, 0x908
    ctx->pc = 0x19caf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2312));
label_19caf4:
    // 0x19caf4: 0x8e422b00  lw          $v0, 0x2B00($s2)
    ctx->pc = 0x19caf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11008)));
label_19caf8:
    // 0x19caf8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_19cafc:
    if (ctx->pc == 0x19CAFCu) {
        ctx->pc = 0x19CAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CAF8u;
        // 0x19cafc: 0xae2308e8  sw          $v1, 0x8E8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2280), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CB00u;
        goto label_19cb00;
    }
    ctx->pc = 0x19CAF8u;
    {
        const bool branch_taken_0x19caf8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x19CAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CAF8u;
        // 0x19cafc: 0xae2308e8  sw          $v1, 0x8E8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2280), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19caf8) {
            ctx->pc = 0x19CB14u;
            goto label_19cb14;
        }
    }
    ctx->pc = 0x19CB00u;
label_19cb00:
    // 0x19cb00: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x19cb00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_19cb04:
    // 0x19cb04: 0x0  nop
    ctx->pc = 0x19cb04u;
    // NOP
label_19cb08:
    // 0x19cb08: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x19cb08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_19cb0c:
    // 0x19cb0c: 0x10000008  b           . + 4 + (0x8 << 2)
label_19cb10:
    if (ctx->pc == 0x19CB10u) {
        ctx->pc = 0x19CB14u;
        goto label_19cb14;
    }
    ctx->pc = 0x19CB0Cu;
    {
        const bool branch_taken_0x19cb0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19cb0c) {
            ctx->pc = 0x19CB30u;
            goto label_19cb30;
        }
    }
    ctx->pc = 0x19CB14u;
label_19cb14:
    // 0x19cb14: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x19cb14u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_19cb18:
    // 0x19cb18: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19cb18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_19cb1c:
    // 0x19cb1c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19cb1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_19cb20:
    // 0x19cb20: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x19cb20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_19cb24:
    // 0x19cb24: 0x0  nop
    ctx->pc = 0x19cb24u;
    // NOP
label_19cb28:
    // 0x19cb28: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x19cb28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_19cb2c:
    // 0x19cb2c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x19cb2cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_19cb30:
    // 0x19cb30: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x19cb30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_19cb34:
    // 0x19cb34: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x19cb34u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_19cb38:
    // 0x19cb38: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19cb38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19cb3c:
    // 0x19cb3c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x19cb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_19cb40:
    // 0x19cb40: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x19cb40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
label_19cb44:
    // 0x19cb44: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19cb44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19cb48:
    // 0x19cb48: 0x2450090c  addiu       $s0, $v0, 0x90C
    ctx->pc = 0x19cb48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2316));
label_19cb4c:
    // 0x19cb4c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x19cb4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_19cb50:
    // 0x19cb50: 0x8e422b00  lw          $v0, 0x2B00($s2)
    ctx->pc = 0x19cb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 11008)));
label_19cb54:
    // 0x19cb54: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x19cb54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_19cb58:
    // 0x19cb58: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_19cb5c:
    if (ctx->pc == 0x19CB5Cu) {
        ctx->pc = 0x19CB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CB58u;
        // 0x19cb5c: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CB60u;
        goto label_19cb60;
    }
    ctx->pc = 0x19CB58u;
    {
        const bool branch_taken_0x19cb58 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x19CB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CB58u;
        // 0x19cb5c: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19cb58) {
            ctx->pc = 0x19CB74u;
            goto label_19cb74;
        }
    }
    ctx->pc = 0x19CB60u;
label_19cb60:
    // 0x19cb60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19cb60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19cb64:
    // 0x19cb64: 0x0  nop
    ctx->pc = 0x19cb64u;
    // NOP
label_19cb68:
    // 0x19cb68: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19cb68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19cb6c:
    // 0x19cb6c: 0x10000008  b           . + 4 + (0x8 << 2)
label_19cb70:
    if (ctx->pc == 0x19CB70u) {
        ctx->pc = 0x19CB74u;
        goto label_19cb74;
    }
    ctx->pc = 0x19CB6Cu;
    {
        const bool branch_taken_0x19cb6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19cb6c) {
            ctx->pc = 0x19CB90u;
            goto label_19cb90;
        }
    }
    ctx->pc = 0x19CB74u;
label_19cb74:
    // 0x19cb74: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x19cb74u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_19cb78:
    // 0x19cb78: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19cb78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_19cb7c:
    // 0x19cb7c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19cb7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_19cb80:
    // 0x19cb80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19cb80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19cb84:
    // 0x19cb84: 0x0  nop
    ctx->pc = 0x19cb84u;
    // NOP
label_19cb88:
    // 0x19cb88: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x19cb88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_19cb8c:
    // 0x19cb8c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x19cb8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_19cb90:
    // 0x19cb90: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x19cb90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_19cb94:
    // 0x19cb94: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x19cb94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_19cb98:
    // 0x19cb98: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x19cb98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_19cb9c:
    // 0x19cb9c: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x19cb9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_19cba0:
    // 0x19cba0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x19cba0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_19cba4:
    // 0x19cba4: 0x3c014090  lui         $at, 0x4090
    ctx->pc = 0x19cba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16528 << 16));
label_19cba8:
    // 0x19cba8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x19cba8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_19cbac:
    // 0x19cbac: 0xc0b12b0  jal         func_2C4AC0
label_19cbb0:
    if (ctx->pc == 0x19CBB0u) {
        ctx->pc = 0x19CBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CBACu;
        // 0x19cbb0: 0x46140502  mul.s       $f20, $f0, $f20 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CBB4u;
        goto label_19cbb4;
    }
    ctx->pc = 0x19CBACu;
    SET_GPR_U32(ctx, 31, 0x19CBB4u);
    ctx->pc = 0x19CBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19CBACu;
    // 0x19cbb0: 0x46140502  mul.s       $f20, $f0, $f20 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x19CBACu, 0x19CBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19CBB4u;
label_19cbb4:
    // 0x19cbb4: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x19cbb4u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_19cbb8:
    // 0x19cbb8: 0xe6140000  swc1        $f20, 0x0($s0)
    ctx->pc = 0x19cbb8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_19cbbc:
    // 0x19cbbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19cbbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19cbc0:
    // 0x19cbc0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19cbc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_19cbc4:
    // 0x19cbc4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x19cbc4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19cbc8:
    // 0x19cbc8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x19cbc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_19cbcc:
    // 0x19cbcc: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x19cbccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_19cbd0:
    // 0x19cbd0: 0x3e00008  jr          $ra
label_19cbd4:
    if (ctx->pc == 0x19CBD4u) {
        ctx->pc = 0x19CBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CBD0u;
        // 0x19cbd4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19CBD8u;
        goto label_fallthrough_0x19cbd0;
    }
    ctx->pc = 0x19CBD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19CBD0u;
        // 0x19cbd4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19CBD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x19cbd0:
    ctx->pc = 0x19CBD8u;
}
