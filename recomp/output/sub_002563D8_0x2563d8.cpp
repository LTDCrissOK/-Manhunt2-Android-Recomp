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

// Function: sub_002563D8
// Address: 0x2563d8 - 0x2564c8
void sub_002563D8_0x2563d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002563D8_0x2563d8");
#endif

    switch (ctx->pc) {
        case 0x25649cu: goto label_25649c;
        case 0x2564a8u: goto label_2564a8;
        case 0x2564b4u: goto label_2564b4;
        default: break;
    }

    ctx->pc = 0x2563d8u;

    // 0x2563d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2563d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2563dc: 0x3c04bfff  lui         $a0, 0xBFFF
    ctx->pc = 0x2563dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49151 << 16));
    // 0x2563e0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2563e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x2563e4: 0x423b8  dsll        $a0, $a0, 14
    ctx->pc = 0x2563e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 14);
    // 0x2563e8: 0x34843fff  ori         $a0, $a0, 0x3FFF
    ctx->pc = 0x2563e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16383);
    // 0x2563ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2563ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2563f0: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2563f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2563f4: 0x21538  dsll        $v0, $v0, 20
    ctx->pc = 0x2563f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 20);
    // 0x2563f8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2563f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2563fc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2563fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256400: 0xde031020  ld          $v1, 0x1020($s0)
    ctx->pc = 0x256400u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 4128)));
    // 0x256404: 0x642024  and         $a0, $v1, $a0
    ctx->pc = 0x256404u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x256408: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x256408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x25640c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x25640Cu;
    {
        const bool branch_taken_0x25640c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x256410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25640Cu;
        // 0x256410: 0xfe041020  sd          $a0, 0x1020($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 4128), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25640c) {
            ctx->pc = 0x256440u;
            goto label_256440;
        }
    }
    ctx->pc = 0x256414u;
    // 0x256414: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x256414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x256418: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x256418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x25641c: 0x21178  dsll        $v0, $v0, 5
    ctx->pc = 0x25641cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 5);
    // 0x256420: 0x3442001f  ori         $v0, $v0, 0x1F
    ctx->pc = 0x256420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31);
    // 0x256424: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x256424u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x256428: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x256428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x25642c: 0x319b8  dsll        $v1, $v1, 6
    ctx->pc = 0x25642cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 6);
    // 0x256430: 0x3463003f  ori         $v1, $v1, 0x3F
    ctx->pc = 0x256430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63);
    // 0x256434: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x256434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x256438: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x256438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x25643c: 0xfe021020  sd          $v0, 0x1020($s0)
    ctx->pc = 0x25643cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 4128), GPR_U64(ctx, 2));
label_256440:
    // 0x256440: 0xde031020  ld          $v1, 0x1020($s0)
    ctx->pc = 0x256440u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 4128)));
    // 0x256444: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x256444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x256448: 0x21778  dsll        $v0, $v0, 29
    ctx->pc = 0x256448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 29);
    // 0x25644c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x25644cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x256450: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x256450u;
    {
        const bool branch_taken_0x256450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x256450) {
            ctx->pc = 0x256454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x256450u;
            // 0x256454: 0xde021020  ld          $v0, 0x1020($s0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 4128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x256474u;
            goto label_256474;
        }
    }
    ctx->pc = 0x256458u;
    // 0x256458: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x256458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x25645c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x25645cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x256460: 0x211b8  dsll        $v0, $v0, 6
    ctx->pc = 0x256460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 6);
    // 0x256464: 0x3442003f  ori         $v0, $v0, 0x3F
    ctx->pc = 0x256464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63);
    // 0x256468: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x256468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x25646c: 0xfe021020  sd          $v0, 0x1020($s0)
    ctx->pc = 0x25646cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 4128), GPR_U64(ctx, 2));
    // 0x256470: 0xde021020  ld          $v0, 0x1020($s0)
    ctx->pc = 0x256470u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 4128)));
label_256474:
    // 0x256474: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x256474u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x256478: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x256478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x25647c: 0x319f8  dsll        $v1, $v1, 7
    ctx->pc = 0x25647cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 7);
    // 0x256480: 0x3463007f  ori         $v1, $v1, 0x7F
    ctx->pc = 0x256480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)127);
    // 0x256484: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x256484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x256488: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x256488u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25648c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x25648cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x256490: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x256490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x256494: 0xc08fed2  jal         func_23FB48
    ctx->pc = 0x256494u;
    SET_GPR_U32(ctx, 31, 0x25649Cu);
    ctx->pc = 0x256498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x256494u;
    // 0x256498: 0xfe021020  sd          $v0, 0x1020($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 4128), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x256494u, 0x25649Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25649Cu;
label_25649c:
    // 0x25649c: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x25649cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x2564a0: 0xc06974a  jal         func_1A5D28
    ctx->pc = 0x2564A0u;
    SET_GPR_U32(ctx, 31, 0x2564A8u);
    ctx->pc = 0x2564A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2564A0u;
    // 0x2564a4: 0x2405080d  addiu       $a1, $zero, 0x80D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5D28u, 0x2564A0u, 0x2564A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2564A8u;
label_2564a8:
    // 0x2564a8: 0x8e040338  lw          $a0, 0x338($s0)
    ctx->pc = 0x2564a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 824)));
    // 0x2564ac: 0xc06b85c  jal         func_1AE170
    ctx->pc = 0x2564ACu;
    SET_GPR_U32(ctx, 31, 0x2564B4u);
    ctx->pc = 0x2564B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2564ACu;
    // 0x2564b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE170u, 0x2564ACu, 0x2564B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2564B4u;
label_2564b4:
    // 0x2564b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2564b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2564b8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2564b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2564bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2564BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2564C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2564BCu;
        // 0x2564c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2564BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2564C4u;
    // 0x2564c4: 0x0  nop
    ctx->pc = 0x2564c4u;
    // NOP
    ctx->pc = 0x2564c8u;
}
