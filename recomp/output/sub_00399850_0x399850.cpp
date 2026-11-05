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

// Function: sub_00399850
// Address: 0x399850 - 0x3998d8
void sub_00399850_0x399850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00399850_0x399850");
#endif

    switch (ctx->pc) {
        case 0x399884u: goto label_399884;
        default: break;
    }

    ctx->pc = 0x399850u;

    // 0x399850: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x399850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x399854: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x399854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x399858: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x399858u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39985c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39985cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x399860: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x399860u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399864: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x399864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x399868: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x399868u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39986c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x39986cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x399870: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x399870u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x399874: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x399874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x399878: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x399878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x39987c: 0xc0e6a60  jal         func_39A980
    ctx->pc = 0x39987Cu;
    SET_GPR_U32(ctx, 31, 0x399884u);
    ctx->pc = 0x399880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39987Cu;
    // 0x399880: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A980u, 0x39987Cu, 0x399884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399884u;
label_399884:
    // 0x399884: 0x662207ff  daddiu      $v0, $s1, 0x7FF
    ctx->pc = 0x399884u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)2047);
    // 0x399888: 0x66250ffe  daddiu      $a1, $s1, 0xFFE
    ctx->pc = 0x399888u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)4094);
    // 0x39988c: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x39988cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x399890: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x399890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x399894: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x399894u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x399898: 0xae12000c  sw          $s2, 0xC($s0)
    ctx->pc = 0x399898u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 18));
    // 0x39989c: 0x21578  dsll        $v0, $v0, 21
    ctx->pc = 0x39989cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 21);
    // 0x3998a0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3998a0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3998a4: 0xae130054  sw          $s3, 0x54($s0)
    ctx->pc = 0x3998a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 19));
    // 0x3998a8: 0xae140058  sw          $s4, 0x58($s0)
    ctx->pc = 0x3998a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 20));
    // 0x3998ac: 0xfe110010  sd          $s1, 0x10($s0)
    ctx->pc = 0x3998acu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 17));
    // 0x3998b0: 0xa2040049  sb          $a0, 0x49($s0)
    ctx->pc = 0x3998b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 73), (uint8_t)GPR_U32(ctx, 4));
    // 0x3998b4: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x3998b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x3998b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3998b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3998bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3998bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3998c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3998c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3998c4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3998c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3998c8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3998c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3998cc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x3998ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3998d0: 0x80e6a66  j           func_39A998
    ctx->pc = 0x3998D0u;
    ctx->pc = 0x3998D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3998D0u;
    // 0x3998d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A998u;
    sub_0039A998_0x39a998(rdram, ctx, runtime); return;
    ctx->pc = 0x3998D8u;
}
