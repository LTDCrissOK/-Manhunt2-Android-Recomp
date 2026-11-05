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

// Function: sub_00205198
// Address: 0x205198 - 0x205220
void sub_00205198_0x205198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00205198_0x205198");
#endif

    switch (ctx->pc) {
        case 0x2051ccu: goto label_2051cc;
        case 0x2051d8u: goto label_2051d8;
        case 0x2051e8u: goto label_2051e8;
        default: break;
    }

    ctx->pc = 0x205198u;

    // 0x205198: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x205198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20519c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20519cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2051a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2051a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2051a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2051a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2051a8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2051a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2051ac: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2051acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2051b0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2051b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2051b4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2051b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2051b8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2051B8u;
    {
        const bool branch_taken_0x2051b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2051BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2051B8u;
        // 0x2051bc: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2051b8) {
            ctx->pc = 0x205208u;
            goto label_205208;
        }
    }
    ctx->pc = 0x2051C0u;
    // 0x2051c0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2051c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2051c4: 0xc0d7468  jal         func_35D1A0
    ctx->pc = 0x2051C4u;
    SET_GPR_U32(ctx, 31, 0x2051CCu);
    ctx->pc = 0x2051C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2051C4u;
    // 0x2051c8: 0x24a50b08  addiu       $a1, $a1, 0xB08 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D1A0u, 0x2051C4u, 0x2051CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2051CCu;
label_2051cc:
    // 0x2051cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2051ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2051d0: 0xc081560  jal         func_205580
    ctx->pc = 0x2051D0u;
    SET_GPR_U32(ctx, 31, 0x2051D8u);
    ctx->pc = 0x2051D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2051D0u;
    // 0x2051d4: 0x2405fc40  addiu       $a1, $zero, -0x3C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205580u, 0x2051D0u, 0x2051D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2051D8u;
label_2051d8:
    // 0x2051d8: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x2051d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2051dc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2051dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2051e0: 0xc0e7388  jal         func_39CE20
    ctx->pc = 0x2051E0u;
    SET_GPR_U32(ctx, 31, 0x2051E8u);
    ctx->pc = 0x2051E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2051E0u;
    // 0x2051e4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39CE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39CE20u, 0x2051E0u, 0x2051E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2051E8u;
label_2051e8:
    // 0x2051e8: 0x92020021  lbu         $v0, 0x21($s0)
    ctx->pc = 0x2051e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 33)));
    // 0x2051ec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2051ECu;
    {
        const bool branch_taken_0x2051ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2051F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2051ECu;
        // 0x2051f0: 0x3c02004a  lui         $v0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2051ec) {
            ctx->pc = 0x205208u;
            goto label_205208;
        }
    }
    ctx->pc = 0x2051F4u;
    // 0x2051f4: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2051f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2051f8: 0x8c43c100  lw          $v1, -0x3F00($v0)
    ctx->pc = 0x2051f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294951168)));
    // 0x2051fc: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x2051fcu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x205200: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x205200u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x205204: 0xa08393c0  sb          $v1, -0x6C40($a0)
    ctx->pc = 0x205204u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294939584), (uint8_t)GPR_U32(ctx, 3));
label_205208:
    // 0x205208: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x205208u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20520c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20520cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x205210: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x205210u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x205214: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x205214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x205218: 0x3e00008  jr          $ra
    ctx->pc = 0x205218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20521Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x205218u;
        // 0x20521c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x205218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x205220u;
}
