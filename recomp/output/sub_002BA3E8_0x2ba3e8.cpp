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

// Function: sub_002BA3E8
// Address: 0x2ba3e8 - 0x2ba4b0
void sub_002BA3E8_0x2ba3e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BA3E8_0x2ba3e8");
#endif

    ctx->pc = 0x2ba3e8u;

    // 0x2ba3e8: 0x30831000  andi        $v1, $a0, 0x1000
    ctx->pc = 0x2ba3e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4096);
    // 0x2ba3ec: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x2ba3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x2ba3f0: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x2ba3f0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x2ba3f4: 0x30854000  andi        $a1, $a0, 0x4000
    ctx->pc = 0x2ba3f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16384);
    // 0x2ba3f8: 0x34434000  ori         $v1, $v0, 0x4000
    ctx->pc = 0x2ba3f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x2ba3fc: 0x30868000  andi        $a2, $a0, 0x8000
    ctx->pc = 0x2ba3fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32768);
    // 0x2ba400: 0x65100b  movn        $v0, $v1, $a1
    ctx->pc = 0x2ba400u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x2ba404: 0x30872000  andi        $a3, $a0, 0x2000
    ctx->pc = 0x2ba404u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8192);
    // 0x2ba408: 0x34438000  ori         $v1, $v0, 0x8000
    ctx->pc = 0x2ba408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x2ba40c: 0x30880800  andi        $t0, $a0, 0x800
    ctx->pc = 0x2ba40cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2048);
    // 0x2ba410: 0x66100b  movn        $v0, $v1, $a2
    ctx->pc = 0x2ba410u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x2ba414: 0x30890100  andi        $t1, $a0, 0x100
    ctx->pc = 0x2ba414u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
    // 0x2ba418: 0x34432000  ori         $v1, $v0, 0x2000
    ctx->pc = 0x2ba418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x2ba41c: 0x42903  sra         $a1, $a0, 4
    ctx->pc = 0x2ba41cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 4), 4));
    // 0x2ba420: 0x67100b  movn        $v0, $v1, $a3
    ctx->pc = 0x2ba420u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x2ba424: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x2ba424u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2ba428: 0x34430200  ori         $v1, $v0, 0x200
    ctx->pc = 0x2ba428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
    // 0x2ba42c: 0x30860040  andi        $a2, $a0, 0x40
    ctx->pc = 0x2ba42cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)64);
    // 0x2ba430: 0x68100b  movn        $v0, $v1, $t0
    ctx->pc = 0x2ba430u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x2ba434: 0x30870080  andi        $a3, $a0, 0x80
    ctx->pc = 0x2ba434u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
    // 0x2ba438: 0x34430100  ori         $v1, $v0, 0x100
    ctx->pc = 0x2ba438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x2ba43c: 0x308a0020  andi        $t2, $a0, 0x20
    ctx->pc = 0x2ba43cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
    // 0x2ba440: 0x69100b  movn        $v0, $v1, $t1
    ctx->pc = 0x2ba440u;
    if (GPR_U64(ctx, 9) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x2ba444: 0x30880004  andi        $t0, $a0, 0x4
    ctx->pc = 0x2ba444u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x2ba448: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2ba448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2ba44c: 0x308b0001  andi        $t3, $a0, 0x1
    ctx->pc = 0x2ba44cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2ba450: 0x34430004  ori         $v1, $v0, 0x4
    ctx->pc = 0x2ba450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x2ba454: 0x30890008  andi        $t1, $a0, 0x8
    ctx->pc = 0x2ba454u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
    // 0x2ba458: 0x66100b  movn        $v0, $v1, $a2
    ctx->pc = 0x2ba458u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x2ba45c: 0x308c0002  andi        $t4, $a0, 0x2
    ctx->pc = 0x2ba45cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x2ba460: 0x34450008  ori         $a1, $v0, 0x8
    ctx->pc = 0x2ba460u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x2ba464: 0x308d0200  andi        $t5, $a0, 0x200
    ctx->pc = 0x2ba464u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)512);
    // 0x2ba468: 0xa7100b  movn        $v0, $a1, $a3
    ctx->pc = 0x2ba468u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x2ba46c: 0x30840400  andi        $a0, $a0, 0x400
    ctx->pc = 0x2ba46cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1024);
    // 0x2ba470: 0x34430002  ori         $v1, $v0, 0x2
    ctx->pc = 0x2ba470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2ba474: 0x6a100b  movn        $v0, $v1, $t2
    ctx->pc = 0x2ba474u;
    if (GPR_U64(ctx, 10) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x2ba478: 0x34450040  ori         $a1, $v0, 0x40
    ctx->pc = 0x2ba478u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x2ba47c: 0xa8100b  movn        $v0, $a1, $t0
    ctx->pc = 0x2ba47cu;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x2ba480: 0x34430010  ori         $v1, $v0, 0x10
    ctx->pc = 0x2ba480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x2ba484: 0x6b100b  movn        $v0, $v1, $t3
    ctx->pc = 0x2ba484u;
    if (GPR_U64(ctx, 11) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x2ba488: 0x34450080  ori         $a1, $v0, 0x80
    ctx->pc = 0x2ba488u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x2ba48c: 0xa9100b  movn        $v0, $a1, $t1
    ctx->pc = 0x2ba48cu;
    if (GPR_U64(ctx, 9) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x2ba490: 0x34430020  ori         $v1, $v0, 0x20
    ctx->pc = 0x2ba490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x2ba494: 0x6c100b  movn        $v0, $v1, $t4
    ctx->pc = 0x2ba494u;
    if (GPR_U64(ctx, 12) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x2ba498: 0x34450800  ori         $a1, $v0, 0x800
    ctx->pc = 0x2ba498u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
    // 0x2ba49c: 0xad100b  movn        $v0, $a1, $t5
    ctx->pc = 0x2ba49cu;
    if (GPR_U64(ctx, 13) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x2ba4a0: 0x34430400  ori         $v1, $v0, 0x400
    ctx->pc = 0x2ba4a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x2ba4a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2BA4A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BA4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA4A4u;
        // 0x2ba4a8: 0x64100b  movn        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA4A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BA4ACu;
    // 0x2ba4ac: 0x0  nop
    ctx->pc = 0x2ba4acu;
    // NOP
    ctx->pc = 0x2ba4b0u;
}
